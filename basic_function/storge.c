
#include <stdio.h>
/*
  auto
   {
    int mount;
    auto int mount;
  } 
  reguster
    {

    register int miles; 

   }
  static
   
  extern
 
 */

void func1(void);

static  int count = 10;

int main(){
  while(count--){
    func1();
  }
  return 0;
}

void func1(void){

  static  int thingy = 5;
  thingy++;
  printf(" thingy value %d , count value %d\n", thingy,count);
}
