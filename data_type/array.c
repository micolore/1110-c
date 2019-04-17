#include <stdio.h>

/*
  type array_name [arraySize]
  double balance[10];
  double balance[5] = {10000.0,2.0,2.3,3.2,0.1};
  double balance[] = {1.0,2.0,4.0};
  balance[3] = 2.0;
  double d = balance[1];
*/

int main(){
  
  int n[10];
  int j , i;

  for (i = 0;i<10;i++){
    n[i] = i + 100;
  }
  for (j = 0;j <10;j++){
    printf("element[%d] = %d\n",j,n[j]);
  }
  return 0;
}

