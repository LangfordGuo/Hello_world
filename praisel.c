// 此文件无法从vs2017执行
/*praisel.c -- 使用不同类型的字符串*/
#include <stdio.h>
#define PRAISE "You are an extraordinary being."
//PRAISE 称赞之意 extraordinary:非同寻常的
int main(void)
{ 
  char name[40];
  printf("what's your name?\n"); 
  scanf("%s",name); 
  printf("Hello,%s. %s\n",name,PRAISE);//注意：此处只打印name的第一个单词，遇到第一个空白就不再读取输入。
  return 0;
 }
