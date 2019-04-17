#include <stdio.h>


/*
  
 (type_name) expression
 
 long double 
 float
 unsigned long long
 long long
 unsigned long
 long
 unsigned int
 int
*/

int main(){

  int sum = 17,count = 5;
  double mean ;

  mean = (double) sum/count;
  printf("mean value of : %f\n",mean);


  int i = 17;
  char c ='c'; //ascii is 99
  int num ;

  num = i + c;
  printf("the num value : %d\n",num);

  return 0;
}

















