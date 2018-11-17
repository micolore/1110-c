#include <stdio.h>

/*
  enum enum_name {e1,e2,...}
#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6
#define SUN 7
*/
enum DAY{
	 MON=1,TUE,WED,THU,FRI,SAT,SUN
};

int main(){
  enum  DAY day;
  day = WED;
  printf("%d\n",day);

  for(day = MON;day <= SUN;day++){
    printf("day of value %d\n",day); 
  }
  return 0;
}
