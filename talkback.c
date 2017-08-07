//该段c语言代码在VS2017里无法运行，但是在vs2010里完全正常
//talkback.c -- 演示与用户交互
#include <stdio.h>
#include <string.h>//string.h
#define DENSTITY 62.4//   宏定义
int main()
{ 
    float weight, 
    volume; 
    int size, letters; 
    char name[40]; //可容纳40个字符的数组       
    /*多加一句*/ 
    int testNo; 
    printf("请输入一个测试数字:\n"); 
    scanf("%d", &testNo); 
    printf("testNo = %d\n", testNo); 
    printf("Hi,What's your fucking name?\n"); 
    scanf("%s", name); 
    printf("%s,What's your weight in pounds?\n", name); 
    scanf("%f", &weight); size = sizeof name; 
    letters = strlen(name); 
    volume = weight / DENSTITY; 
    printf("Well,%s,Your volume is %2.2f cubic feet.\n", name, volume); 
    printf("Also,your first name has %d letters\n", letters); 
    printf("We have %d bytes to store it.\n", size); 
    return 0; //birth 1991
}
