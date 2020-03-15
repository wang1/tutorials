#include "stdio.h"
void main(){
  char gender, degree;  // 定义了gender用于保存性别, degree保存等级(ABC)
  printf("What is your gender(F-Female, M-Male):");
  gender = getchar();  // 程序在此将等你输入F/M, 然后存到gender变量中
  // getchar();  //  getchar()将接收上次输入中的回车, 以免影响下次输入
  printf("What is your degree(A, B, or C):");
  degree = getchar();  // 程序在此将等你输入A/B/C, 然后存到degree变量中
  printf("Your gender is %c, your degree is %c\n", gender, degree);  
}