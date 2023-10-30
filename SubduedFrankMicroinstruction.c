#include <stdio.h>
#include<stdlib.h>
struct date{
   int day;
   int month;
   int year;
};
int main(void) {
  char str[]="31/11/2022";
  struct date d;
  sscanf(str,"%d/%d/%d",&d.day,&d.month,&d.year);
  printf("%d-%d-%d",d.day,d.month,d.year);
  }
