/**
 * 在main函数中输入一个正整数，要求在1～20之间，否则重新输入
 * 由fact函数使用递归的方式求出该正整数的阶乘
 * 在main函数中输出结果。
**/
#include <stdio.h>
void main() {
  float x,y;
  char o;
  double r;
  scanf("%f %f %c", &x, &y, &o);
  
  switch(o) {
    case '+': r = x + y; break;
    case '-': r = x - y; break;
    case '*': r = x * y; break;
    case '/': r = x / y; break;
  }
  printf("%f", r);
}


// 模拟进度， 注意Windows平台是Sleep（），以毫秒为单位
// #include "unistd.h"
// int i;

    // for (i = 0; i <= 100; i+=10) {
    //   printf("\b=>");
    //   // printf("\rprogress: %3d %%", i);
    //   fflush(stdout);//需要特别注意的是，终端设备是行缓冲设备，即除非输出换行符\n或缓冲区已满，否则printf()不会有任何输出；所以这里需要使用fflush(stdout)清除标准输出缓冲区，以立即输出缓冲区内容。
    //   sleep(1);
    // }

    // printf("\n");
  
//   #include <stdio.h>
// #include "unistd.h"
// void main(){
//   int n = 1;
//   while(1){
//     printf("\b-");fflush(stdout);Sleep(300);
//     printf("\b\\");fflush(stdout);Sleep(300);
//     printf("\b|");fflush(stdout);Sleep(300);
//     printf("\b/");fflush(stdout);Sleep(300);
//     n++;
//     if(n == 3) {
//       printf("\bGame Over\n");
//       break;
//     }
//   }
// }

 

// 字符画
// https://www.jianshu.com/p/fca56d635091
// ascii码图形， 可用于讲解函数
  // printf("Hello, I'am cat\n");
  // printf(" \\\\\n");
  // printf("  \\\\\n");
  // printf("    /\\_/\\\n");
  // printf("   ( o o )\n");
  // printf("   =( I )=\n");