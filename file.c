#include <stdio.h>


/*
  FILE *fopen(const char * filename,const char * mode);
 
  mode 
   r w a r+ w+ a+

   byte of mode
   rb wb ab rb r+b w+b ab+ a+b 

   int fclose(FILE *fp);
   int fputc(int c,FILE *fb);
   int fputs(const char *s,FILE *fb);


  size_t fread(void *ptr,size_t,size_elements,size_t size_unmber_elements,FILE *a_file);
*/

int main(){
  FILE *fp = NULL;
  char  buff[255];

  fp = fopen("/usr/local/tools/c/1110-c/data.c","r");
  fscanf(fp,"%s",buff);
  printf("1: %s\n ",buff);
  
  fgets(buff,255,(FILE*)fp);
  printf("2: %s\n",buff);

  fgets(buff,255,(FILE*)fp);
  printf("3: %s\n",buff);

  fclose(fp); 
  return 0;

}
