// 演示一个for循环
#include <stdio.h>
int main(void)
{ 
  const int NUMBER = 22; 
  int count;
  for(count = 1;count <= NUMBER ;count++)   // 注意此处不能有分号  
     printf("count=%d \n",count);
 return 0;
}
