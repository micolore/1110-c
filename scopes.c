#include <stdio.h>

int g ;

int main(){

  int a , b;
  int c;

  a = 10;
  b = 20;
  c = a + b;

  printf("value of a = %d, b = %d ,and c = %d\n",a,b,c);

  g = c + a;
  printf("value of g : %d\n",g);

  g = 10;
  printf("value of g 2 : %d\n",g);
  return 0;
}
