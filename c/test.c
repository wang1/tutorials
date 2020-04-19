/**
 * 求平均成绩
 * 对数组的处理一般都与循环相关
**/
#include <stdio.h>
void main(){
  int score[5] = { 64, 77, 89, 99, 100 }, i, total; // total用来存放总分，需要初始化为0.
  float ave;  // 存放平均分
  for (i = 0; i < 5; i++) {
    total = total + score[i];
  }
  ave = total / 5.0;
  printf("Average is: %.2f\n", ave);
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