#include <stdio.h>
#include <stdarg.h>
/*
int func(int , ...){


}

func(1,2);
func(1,2,3);

*/
double avg(int num,...){

  va_list valist;
  double sum = 0.0;
  int i ;

  va_start(valist,num);

  for(i = 0; i < num; i++){
      sum += va_arg(valist,int);
  }  
  va_end(valist);

  return sum/num;
}
int main(){
  printf("avg of 2 3 4 5 = %f\n",avg(4,2,3,4,5));

  return 0;
}
