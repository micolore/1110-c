#include <stdio.h>

/*
 typedef int(*fun_ptr)(int,int);
*/
int max(int x,int y){
  return x > y ?x:y;
}

int main(){

  int (* p)(int,int) = & max;
  int a , b, c, d;

  printf("plz input three number:");
  scanf("%d %d %d",& a,& b,& c);
  d = p(p(a,b),c);
  printf("the max value of %d\n",d);

  return 0;
}
