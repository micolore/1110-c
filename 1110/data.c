#include <stdio.h>
#include <float.h>
//basic
/*

 int 
 char  1 byte 
 unsigned char  1b
 signed char 1b
 int  2-4b
 unsigned int 2-4b 
 short 2b 
 unsigned short 2b
 long 4b
 unsigned long 4b

 float
 float 4b
 double 8b
 long double 16b
*/
int main(){
    printf("int size of :%lu \n",sizeof(int));
    printf("float size of :%lu \n",sizeof(float));
    printf("float : min %E\n",FLT_MIN);
    printf("float : max %E\n",FLT_MAX);
    printf("精度: %d\n",FLT_DIG);
    return 0;
}

//enum

//void

//derived
/*
 pointer array struct 共用体 fun
*/
