@echo on
setlocal ENABLEDELAYEDEXPANSION
REM 内容来源于互联网，批处理命令学习之 ---- 如何在bat文件中创建数组，并使用plink 与linux交互
set PASSWORD=root
set smbpasswd=
set user=root
set PORT=22
net use /delete Y: /y
net use  Y:  "\\10.252.168.110\root\usr1"  huawei /USER:root
set Agent_IP_list="10.249.161.241 10.254.165.96 100.120.43.197 10.250.79.245 100.120.106.190 10.248.118.145 10.251.91.238 100.120.107.210 10.248.175.161 100.120.99.121 10.248.175.93 10.248.95.116 100.120.173.24 10.248.111.112 10.251.85.42 10.248.167.67 10.252.114.232 100.120.99.200 100.120.189.44 10.254.192.146 100.120.122.112 10.252.113.73 100.120.59.161 10.251.92.105 10.248.119.189 10.248.167.220 10.248.95.57 100.120.172.123 100.120.67.126 100.120.204.198 100.120.82.102 10.251.85.70 10.252.115.136 10.251.93.2 10.254.193.202 10.252.112.117 10.248.94.154 10.248.120.211 100.120.122.254 100.120.123.124 100.120.115.5 100.120.189.103 10.251.89.163 10.249.163.81 100.120.205.153 10.248.175.243 100.120.114.196 100.120.122.110 100.120.75.41 10.248.174.251 10.248.87.154 10.248.167.163 100.120.253.124 100.120.99.26 10.254.193.83 10.250.86.171 10.252.114.205 100.120.99.195 10.248.123.93 10.248.169.203 10.249.167.34 100.120.123.204 10.248.175.231 10.248.169.71 10.251.93.199 10.251.92.116 100.120.58.123 10.249.173.12 100.120.252.183 10.251.89.143 100.120.122.199 100.120.205.214 100.126.31.6 10.248.123.25 10.248.175.37 10.249.165.191 10.249.62.189 10.251.93.109 100.120.204.167 100.120.107.186 100.120.75.203 10.248.167.170 10.248.166.187 10.249.161.206 10.249.166.136 100.120.123.59 10.251.92.221 100.120.98.168 100.120.43.133 100.120.67.98 10.252.113.219 100.120.83.132 10.250.80.162 10.249.165.148 10.249.162.240 100.120.204.111 10.249.160.176 10.248.121.140 10.248.117.9 10.252.115.236 10.249.172.245 100.120.35.98 100.120.253.83 10.249.69.82 10.252.113.79"
rem set Agent_IP_list="10.249.161.241 10.254.165.96 "


call:fun_arr %Agent_IP_list% array len
for /l %%i in (1,1,%len%) do (
	echo array[%%i]=!array[%%i]! >> !array[%%i]!.log
	net use /delete Z: /y >> !array[%%i]!.log 
	net use  Z:  "\\!array[%%i]!\root\usr1"  %smbpasswd% /USER:%user% >> !array[%%i]!.log
	echo plink.exe -pw %PASSWORD% %user%@!array[%%i]! -P %PORT% mkdir /usr1/build  >> !array[%%i]!_ecgp.log
	echo y|plink.exe -pw %PASSWORD% %user%@!array[%%i]! -P %PORT% mkdir /usr1/build >> !array[%%i]!_ecgp.log
	echo copy Y:\pom\CGPV2R19_Code\code\current\CGPV200R019C00_Depends\uvp\latest\ecgp_Software\03.DebugTools\Euler_compile_env.tar.gz \\!array[%%i]!\root\usr1\build\ >> !array[%%i]!_ecgp.log
	copy Y:\pom\CGPV2R19_Code\code\current\CGPV200R019C00_Depends\uvp\latest\ecgp_Software\03.DebugTools\Euler_compile_env.tar.gz \\!array[%%i]!\root\usr1\build\ >> !array[%%i]!_ecgp.log
	echo y|plink.exe -pw %PASSWORD% %user%@!array[%%i]! -P %PORT% cd /usr1/build; tar -xzvf Euler_compile_env.tar.gz; mv Euler_compile_env /usr1/Euler_compile_env_ecgp >> !array[%%i]!_ecgp.log
	echo copy Y:\pom\CGPV2R19_Code\code\current\CGPV200R019C00_Depends\uvp\latest\Software\03.DebugTools\Euler_compile_env.tar.gz \\!array[%%i]!\root\usr1\ >> !array[%%i]!_cgp.log
	copy Y:\pom\CGPV2R19_Code\code\current\CGPV200R019C00_Depends\uvp\latest\Software\03.DebugTools\Euler_compile_env.tar.gz \\!array[%%i]!\root\usr1\ >> !array[%%i]!_cgp.log
	echo y|plink.exe -pw %PASSWORD% %user%@!array[%%i]! -P %PORT% cd /usr1/; tar -xzvf Euler_compile_env.tar.gz >> !array[%%i]!_cgp.log
)

pause
goto:eof

:: ///////////////////////////////////////////
:fun_arr
	rem 用法：call:fun_arr %Agent_IP_list% array len
	rem  in: %Agent_IP_list%  - 空格分隔的数据
	rem out: array  - 数组名
	rem      len    - 数组长度

	set Agent_IP_liststr=%1
	set Agent_IP_liststr=%Agent_IP_liststr:"=%
	set "arr=%2"

	rem 清空数组
	set /a n=0
	:fun_arrCls_loop
		set /a n+=1
		if "!%arr%[%n%]!" equ "" (goto:fun_arr_continue)
		set "%arr%[!n!]="
	goto:fun_arrCls_loop

	rem 数组赋值
	:fun_arr_continue
	set /a n=0
	for %%j in (%Agent_IP_liststr%) do (
		set /a n+=1
		set %arr%[!n!]=%%j
	)
	set %3=%n%
goto:eof
