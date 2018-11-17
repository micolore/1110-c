# include <stdio.h>

#define LENGTH 10
#define WIDTH 20
#define NEWLINE '\n'


int main(){

  printf("hello\tworld\n\n");

  int area;
  area = LENGTH * WIDTH;
  printf("value of area: %d ",area);

  printf("%c",NEWLINE);

  const int l = 10; 
  const int w = 5;    
  const char N  = '\n';
  int a ;
  a = l * w;
  printf("value of a : %d",a);
  printf("%c",N);
  
  return 0;
}
