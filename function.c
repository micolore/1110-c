#include <stdio.h>
/*
  return_type function_name(){
     body of the function
  }


  int max(int,int);
  
  传值调用 c default
  引用调用
*/
int max(int,int);

int max(int num1,int num2){
  int result;
  if(num1 > num2){
    result = num1;
  }else{
    result = num2;
  }
  return result;
}

int main(){
  int a =100;
  int b =200;
  int ret;

  ret = max(a,b);
  
  printf("max of value : %d\n",ret);
  
  return 0;
}
