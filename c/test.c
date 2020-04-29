/**
 * 使用函数判断是否为润年
 * 满足润年的条件是：
 * 能被4整除但不能被100整除(普通润年）；或者能被400整除（世纪润年）
**/
#include "stdio.h"

int isLeapYear(int year) {   // 返回一个整数（0或者1），接收要判断的年份
  int result;
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 ==0) {
    result = 1;
  } else {
    result =0;
  }
  return result;
}

void main() {
  int n;
  printf("Please input a year:");
  scanf("%d", &n);
  if (isLeapYear(n)) {
    printf("%d is leap year!\n", n);
  } else {
    printf("%d is not leap year!\n", n);
  }  
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