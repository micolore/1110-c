#include <stdio.h>

/*
  type *var-name;

  int    *ip;
  double *dp;
  float  *fp;
  char   *ch;
*/



int main(){
  int var1;
  char var2[10];
  
  printf("var1 address: %p\n",&var1);
  printf("var2 address: %p\n",&var2);

  int var = 20;
  int *ip;

  ip = &var;

  printf("address of var variable:%p\n",&var);
  printf("address of ip variable:%p\n",ip);
  printf("value of *ip variable:%d\n",*ip);

  int *ptr = NULL;
  printf("ptr address is %p\n",ptr);
  
  return 0;
}
