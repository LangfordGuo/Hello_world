//见教科书114页
#include <stdio.h>
#define SEC_PER_MIN 60
int main(void)
{ 
  int sec , min , left_sec; 
  printf("该程序用来将秒钟数转换成“分：秒”格式\n"); 
  printf("输入秒钟数：\n"); scanf("%d",&sec);
  while(sec>0) 
  {  
    min = sec / SEC_PER_MIN ;//截断（取分钟数）  
    left_sec = sec % SEC_PER_MIN;  
    printf("%d秒钟=%d分%d秒\n",sec,min,left_sec);  
    printf("请输入下一个秒钟数:\n");  
    scanf("%d",&sec); 
  } 
  printf("完毕！\n"); 
  return 0;
}
