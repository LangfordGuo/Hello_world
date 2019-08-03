// 关于增量运算符和减量运算符
#include <iostream>
using std::cout;
using std::endl;
int main()
{ 
  cout << "=====================关于++前置或者后置的问题===========================" << endl; 
  int num1{ 8 }; 
  int num2; 
  num2 = num1++ + 10; 
  printf("***  int num1{ 8 };
  int num2;
  num2 = num1++ + 10; \n"); 
  cout << "***  unm2的值是" << num2 <<"此时num1的值是"<<num1<< endl;
  //num2为18；num1为9-----num1++ 先将num1的值用于表达式，再给num1加1 
  int numA{ 8 }; 
  int numB; 
  numB = ++numA + 10; 
  printf("***  int numA{ 8 };int numB;numB = ++numA + 10; \n"); 
  cout << "***  unmB的值是" << numB << "此时numA的值是" << numA << endl;
  //numB为19；numA为9----------先将numA加1，再将numA用于表达式 
  cout << "=====================关于--前置或者后置的问题===========================" << endl; 
  int num3{ 8 }; 
  int num4;
  num4 = num3-- + 10; 
  printf("***  int num3{ 8 };int num4;num4 = num3-- + 10; \n"); 
  cout << "***  unm4的值是" << num4 << "----此时num3的值是" << num3 << endl;
  //num4为18；num3为9-----num3++ 先将num3的值用于表达式，再给num3减1 
  int numC{ 8 }; 
  int numD; 
  numD = --numC + 10; 
  printf("***  int numC{ 8 };int numD;numD = --numC + 10; \n"); 
  cout << "***  unmD的值是" << numD << "----此时numC的值是" << numC << endl;
  //numD为19；numC为9----------先将numC减去1，再将numC用于表达式 
  cout << "======================================================================" << endl; 
  return 0;
}
