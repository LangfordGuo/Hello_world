//递增运算符前缀模式++a和后缀模式a++区别.c
#include <stdio.h>
int main()
{ 
  /* 前缀和后缀*/ 
  int a = 1, b = 1; 
  int a_post, pre_b; 
  a_post = a++;//后缀递增   a_post的值是a递增之前的值 
  pre_b = ++b;//前缀递增    pre_b的值是b递增之后的值
  printf("a a_post b pre_b \n"); 
  printf("%ld %3d %4d %3d\n",a,a_post,b,pre_b);
  return 0;
}
/*
程序输出结果：
a a_post b pre_b
2   1   2   2
Press any key to continue . . .
*/
