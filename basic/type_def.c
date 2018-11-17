#include <stdio.h>
#include <string.h>


#define TRUE 1
#define FALSE 0
/*
  typedef unsigned char BYTE;

  BYTE b1,b2;

  typedef unsigned char byte;


  与define区别
  typedef 仅仅限定类型符号名称 #define 可以为数值定义别名
  typedef 编译器解释的 #define 是预编译器进行处理的 
*/

typedef struct Books{

  char title[20];
  char author[30];
  char subject[20];
  int book_id;
  
}Book;


int main(){
  Book book;

  strcpy(book.title,"c language");
  strcpy(book.author,"m.d");
  strcpy(book.subject,"study 1");
  book.book_id = 23;

  printf("book title: %s ,book author: %s,book subject: %s ,book bookid :%d\n",book.title,book.author,book.subject,book.book_id);


  printf("TRUE value is %d\n",TRUE);
  printf("FALSE value is %d\n",FALSE);
  return 0;

}



