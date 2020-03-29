/**
 * 使用for循环求 1+2+3+...+99+100
**/
#include "stdio.h"
void main() {
  int i, sum;  // sum用来存放和
  for(i = 1; ; i++) {
  printf("hahaha\n");
}
  printf("1+2+3+...+99+100=%d\n", sum);
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
  
  // while(1){
  //   printf("\b-");fflush(stdout);sleep(0.8);
  //   printf("\b\\");fflush(stdout);sleep(0.8);
  //   printf("\b|");fflush(stdout); sleep(0.8);
  //   printf("\b/");fflush(stdout); sleep(0.8);
  // }

  // 猜数字游戏
// #include "stdio.h"
// #include <time.h>
// #include <stdlib.h>
// void main() {
//   char bingo = 'n';
//   int randomNumber, yourGuess, times = 0;
//   srand( (unsigned)time( NULL ) );  // 每次不一样的种子
//   randomNumber = rand()%100+1;
//   //printf("%d\n",randomNumber);
//   printf("Please input a number(1~100):");
//   while(bingo == 'n'){
//     scanf("%d", &yourGuess);
//     times++;
//     if(randomNumber > yourGuess){
//       printf("It's greater than %d. again:", yourGuess);
//     } else if (randomNumber < yourGuess) {
//       printf("It's samller than %d. again:", yourGuess);
//     } else {
//       printf("Bingo! You got %d in %d times!", randomNumber, times);
//       bingo = 'y';
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