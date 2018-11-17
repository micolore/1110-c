#include <stdio.h>

/*
  struct tag{
    member-list
    member-list
    member-list
    ...
  } variable-list;
  
  struct{
    int a;
    char b;
    double c;
 }
  
  struct simple t1,t2[20],*t3;

  typedef stuct{
   int a;
   char b;
   double c;
  }simple2;
  
  simple2 u1,u2[20],*u3;
  //包含了别的结构体
  sturct complex{
    char string[100];
    struct simple a;
  };

  //指向自己的子针
  struct mode{
    char string[100];
    struct mode *next_node;
  }
  
  struct B;

  struct A
  {
    struct B *partner;

  };
  strut B{
    struct A *partner;
  }


struct
{
  char title[50];
  char author[50]; 
  char subject[120];
  int book_id;
} book;
*/
struct Books
{
  char title[50];
  char author[50];
  char subject[50];
  int book_id;
} book = {"c langanuge","my","it",123456};

     int main(){
	    printf("title: %s\nauthor: %s\nbook_id: %d\n",book.title,book.author,book.book_id);

	    return 0;
    }


