/*
#include <stdio.h>
#define ADJUST 7.31
int main(void)
{ 
 const double SCALE = 0.33333; 
 double shoe,foot;
 printf("Shoe size (men's)        foot    length\n"); 
 shoe = 3.0; 
 while (shoe <= 18.5)//while 循环开始 {     // 块开始  
 foot = SCALE * shoe + ADJUST;  
 printf("%10.3f    %15.2f     
 inches\n",shoe,foot);//%10.3f  其中10代表数字前预留10个空字符，小数点后的3表示精确到小数点后三位  
 shoe = shoe + 0.10; }//块结束 
 printf("If the shoe fits you ,Ware it.\n"); 
 return 0;
}
 */
 
 #include <stdio.h>
 int main(void)
 { 
  int num = 1; 
  while (num < 21) 
  {  
   printf("%4d%6d\n",num,num*num);  
   num = num + 1; 
  } 
  return 0;
}
