#include <stdio.h>
#include <string.h>
/*
  概念: 允许你在相同的内存位置上存储不同的数据类型
  union [union tag]{
  
  member definition;
  member definition;
  ...
  member definition;
}[one or more union variables]


  根据调用的顺序会导致值的缺失
*/

union Data {
  int i;
  float f;
  char str[20];

}data;

int  main(){

  union Data data;

  data.i = 10;
  data.f = 220.0;
  strcpy(data.str,"c langrauge");
  
  printf("Memory size by data :%d\n ",sizeof(data));

  printf("data.i : %d\n ",data.i);
  printf("data.f : %f\n ",data.f);
  printf("data.str : %s\n",data.str);
  return 0;

}
