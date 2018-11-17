#include <stdio.h>

/*
  struct  
  {
   unsigned int widthValidated;
   unsigned int heightValidated;
  }status;
  
  
  struct 
 {
  unsigned int widthValidated;
  unsigned int heightValidated

 }status;
 
*/

struct {
  unsigned int width;
  unsigned int heght;
  

}status1;

struct {
  unsigned int width :1 ;
  unsigned int heght :1 ;

}status2;


int main(){

  printf("memory size of by status1 :%d\n",sizeof(status1));
  printf("memory size of by status2 :%d\n",sizeof(status2));

  return 0;

}

