#include <stdio.h>
#include "header.h"
/*
  own header compiler header
  
  #include <file>
  
  once 
   如果一个头文件引用两遍,编译器会处理两次头文件的内容，把文件的整个内容放在条件编译器中
  有条件引用
  #if system_1
   # include "<system.h>"   
*/
int x ;

int main(){

  puts(test());

  return 0;
}
