# include<stdio.h>
/*
 struct 位域结构名
 {
   位域列表
   类型说明符 位域名:位域长度 
   
   位域变量名.位域名
   位域变量名->位域名
 }

*/
struct bs{
  int a:8;
  int b:2;
  int c:5;
}data;

struct  packed_struct{
  unsigned int f1:1;
  unsigned int f2:2;
  unsigned int type:4;
  unsigned int my_intL:9;
}pack;

