#include <stdio.h>
#include <error.h>
#include <string.h>

/*
  errno();
  perror();
     显示您传给它的字符串，后跟一个冒号 一个空格 和当前error的值文本形式
  strerror();
     返回一个指针 指向当前errno值的文本形式

  exit_success 
*/
extern int errno;

int main(){

  FILE * pf;
  int errnum;
  pf =  fopen("1.txt","rb");
  if(pf == NULL){
    errnum = errno;
    fprintf(stderr,"error num is %d\n",errno);
    perror("by perror output error!");
    fprintf(stderr,"open file is error %s\n",strerror(errnum));
  }else{
    fclose(pf);
  }
  return 0;
}
