#include <stdlib.h>
#include <stdio.h>
#define MONTH 28
//creates a new type called days which is of type int
typedef enum
{
   mon, tues, wed, thurs, fri, sat, sun //enumerant
} day;



day find_next_day(day a);

int main() {
   int i;
   day old_day = mon;
   day new_day;

   for (i = 0; i <= MONTH; i++) {

      new_day = find_next_day(old_day);
      printf("the next day is %d\n", new_day);
      old_day++;
   }
   return 0;
}

day find_next_day(day d){
   day next_day;
   next_day = ++d%7;
}
