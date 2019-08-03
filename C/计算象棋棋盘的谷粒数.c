#include <stdio.h>
#define SQUARES 64 //棋盘中的方格子数
int main(void)
{ 
   /* 
   格子：1 2 3 4 5  ... n       ... 
   麦粒：1 2 4 8 16 ... 2^(n-1) ... 
   现在的问题是：如何表现这2^(n-1)?  (待会儿再考虑他们的和问题) 
   */ 
   const double CROP = 2E16;//世界小麦年产谷粒数 2*(10^16) 
   double current,total; 
   int count = 1; /* 方格序列 */ 
   printf("方格       谷粒             总计         世界年产倍数差\n"); 
   total = current = 1.0; /* 从第一粒谷粒开始计算 */ 
   printf("CROP=%d\n",CROP); 
   printf("%3d %15.2e %15.2e %15.2e\n",count,current,total,total / CROP); 
   while (count < SQUARES) 
   {  
       count = count + 1;  
       current = 2 * current;/* 下个方格内的谷粒数翻倍 */  
       total = total + current;/* 更新总数 */  
       printf("%3d %15.2e %15.2e %15.2e\n",count,current,total,total / CROP);
   } 
   printf("完毕！"); 
   return 0;
}
