/*该程序使用已经定义的常量*/
#include <stdio.h>
#define PI 3.141592653

/*注意：#define 末尾不能加分号！ 预处理变量PI要大写。这样才能一眼看出来是常量。。。也不能加等号'='
还可以定义 转义字符（用单引号）、字符串常量（用双引号）
#define BEEF '\a'
#define TEE 'T'
#define OOPS "Now you have done it"
*/

int main(void)
{ 
 float area,circum,radius; //radius 半径；circum 圆周，周长 
 printf("What's the radius of your pizza?\n"); 
 scanf("%f",&radius);// 这里的取地址符&不能丢 
 area = PI * radius * radius; 
 circum = 2.0 * radius * PI; 
 printf("Your basic pizza paramters are as follows:\n"); 
 printf("circumference = %1.2f, area = %1.2f\n",circum,area); 
 return 0;
}
