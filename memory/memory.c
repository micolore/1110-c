#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
  void *calloc(int num,int size);
     在内存中动态的分配num长度为size的连续空间，并且每个字节初始化为0
     num*size的内存空间 
  void free(voud *address);
     释放address所指向的内存快 释放的是动态分配的内存空间
  void *malloc(int num);
     在堆区分配一块指定大小的内存空间，用来存放数据，这块内存空间在函数执行完毕之后不会被初始化，它们的值是未知的
  void *realloc(void *address,int newsize);
     该函数重新分配内存,把内存扩展到newsize

*/

int main(){
  

  char name [100];
  char * desc;

  strcpy(name,"Lee");

  desc = (char *)malloc(200 * sizeof(char));
  if(desc == NULL){
    fprintf(stderr,"error - unable  to allocate required memomory\n");
  }
  else{
    strcpy(desc,"lee is a hero!");
  }
  printf("name = %s\n",name);
  printf("desc : %s\n",desc);
  return 0;
}
