#include <stdio.h>
/*
type variable_list;

int i ,j,k;
char c,ch;
float f,salary;
double d;

extern int d = 3 ,f = 5;
int d =  3, f = 5;
byte z = 22;
char x = 'x';


extern int i;//只是声明
int i;//声明也是定义
*/

extern  int a ,b;
extern  int c;
extern  float f;

int main(){

  /*
    def variable
  */
  int a , b;
  int c;
  float f;

  /*
   init
  */
  a = 10;
  b = 20;

  c =  a + b;
  printf("value of c :%d \n",c);

  f = 70.0/3.0;
  printf("value of f :%f \n",f);
  return 0;

  // 20 = 20;
  // int g = 20;
}
