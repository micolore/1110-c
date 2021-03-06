#include <stdio.h>

/*

  #define 定义宏 
  #include 包含一个源码文件
  #undef 取消定义的宏
  #ifdef 如果宏已经定义 返回真
  #ifnder 如果宏没有定义 返回真
  #if    如果给定的条件为真 则编译下面的代码
  #else  #if的替代方案
  #elif  如果上面的if不为真 则执行下面的代码
  #endif 结束一个#if #else的 编译块
  #error当遇到标准错误的 输出错误信息
  #pragma 使用标准方法 向编译器发布特殊的的命令到编译器中



  example:

  #define MAX_ARRAY_LENGTH 20
  #include <stdio.h>
  #include "my_string.h"
  
  #undef FILE_SIZE
  #define FILE_SIZE  20

  #ifdef MESSAGE
    #define MESSAGE "you win!"
  #endif

  #ifdef DEBUG
      .....
  #endif
 
  
  Predefined macros
   _DATE_ _TIME_ _FILE_ _LINE_ _STDC_


  #define message_for(a,b) 
     printf(#a " and" #b ": we love you!\n");
  
   # ##
   参数化的宏模拟函数    
*/

#define message_for(a,b)  printf(#a "  and " #b ": we love you!\n")
#define square(x) ((x) * (x))
#define max(x,y) ((x) >(y) ? (x) : (y))

int f_square(int x){
  return x * x;
}

int main(){

  printf("File :%s\n", __FILE__ );
  printf("Date :%s\n", __DATE__ );
  printf("Time :%s\n", __TIME__ );
  printf("Line :%d\n", __LINE__ );
  printf("ANSI :%d\n", __STDC__ );

  message_for(Carole,Debra);

  printf("max between 20 and 10 is %d\n",max(10,20));
  return 0;



}
