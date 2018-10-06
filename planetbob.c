#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


int nametest(char a, char b, char c);
int isvowel(char arg);
int isconsonant(char arg);
int sumtest(char a, char b, char c);
int isprime(int a);
//Test function
void assertion(void);

int main() {
   printf("print your name:\n");
   char a = getchar();
   char b = getchar();
   char c = getchar();

   if (nametest(a, b, c)) {
      printf("you're for planet bob\n");
   }
   else {
      printf("you're not from bob!\n");
   }

   return EXIT_SUCCESS;
}

int nametest(char a, char b, char c){
   if (a != c) {
      printf("the first letter didn't equal the last!\n");
      return 0;
   }
   if (isvowel(a) && isconsonant(b) && isvowel(c) && a == c && sumtest(a,b,c)) {
      return 1;
   }
   else if (isconsonant(a) && isvowel(b) && isconsonant(c) && a == c && sumtest(a,b,c)) {
      return 1;
   }
   else {
      return 0;
   }
}
//Checked for real lowercase char values
int isvowel(char arg){
   if (arg == 'a' || arg == 'e' || arg == 'i'|| arg == 'o' || arg == 'u') {
      return 1;
   }
   else {
      return 0;
   }
}
//checked for real lowercase char values
int isconsonant(char arg){
   if (arg != 'a' || arg != 'e' || arg != 'i'|| arg != 'o' || arg != 'u') {
      return 1;
   }
   else {
      return 0;
   }
}
int sumtest(char a, char b, char c){

   char avalue = a - 96;
   char bvalue = b - 96;
   char cvalue = c - 96;
   printf("a = %d\n", avalue);
   printf("b = %d\n", bvalue);
   printf("c = %d\n", cvalue);
   char sum = avalue + bvalue + cvalue;
   if (isprime(sum)) {
      return 1;
   }
   else {
      return 0;
   }

}
//CHECKED
int isprime(int a){
   int i;
   if (a < 2) {
      return 0;
   }
   for (i = 2; i <= a/2; i++) {
      if (a%i == 0) {
         return 0;
      }
   }
   return 1;
}

void assertion(void){
   //isprime function tests
   assert(isprime(1)==0);
   assert(isprime(2)==1);
   assert(isprime(3)==1);
   assert(isprime(4)==0);
   assert(isprime(5)==1);
   assert(isprime(97)==0);

   // isvowel function tests
   assert(isvowel('a')==1);
   assert(isconsonant('v')==1);
   assert(isvowel('g')==0);
   assert(isconsonant('b')==1);

   //sumtest function tests
   assert(sumtest('b','o','b') == 1);
   assert(sumtest('a','b','a')==0);

   //nametest function tests
}
