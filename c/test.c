/**
 * 凯撒加密，即将字符变为其后方固定位置的字符，以致看不明白意思
**/
#include "stdio.h"
void main() {
  // plainText是没加密的明文口令，cypherText存放加密的密文口令  
  char plainText[]="DaShiWoYeBuShou", cypherText[20];
  int i = 0;
  while(plainText[i] != '\0') {
     // 将明文的每个字符变为其后方第2个字符，如a变为c，S变为U等
    cypherText[i] = plainText[i] + 2;
    i++;
  }
  cypherText[i] = '\0';   // 添加新字符串结束标记
  printf("Password is : ");
  puts(cypherText);
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