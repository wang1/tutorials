/**
 * 使用循环和选择结构在[10,100]内找前5个能被3整除的数，找满后使用break退出循环
**/
#include <stdio.h>
void main(){
  int i, n = 0;
  for(i = 10; i <= 100; i++) {
    if(i % 3 == 0) {
      n++;
      printf("No%d: %d\n", n, i);
    }
    if(n == 5) {
      break;
    }
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