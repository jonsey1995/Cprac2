#include <stdio.h>

#define ASCIIa 97
#define ASCIIz 122
#define ASCIIA 65
#define ASCIIZ 90

int scode(int c);

int main() {
  char c;
  while ((c = getchar()) != EOF) {
    putchar(scode(c));
  }
  return 0;
}

int scode(int c){

  if (c >= ASCIIa && c <= ASCIIz) {
    int position_from_a = c - ASCIIa;
    int codechar = ASCIIz - position_from_a;
    return codechar;
  }
  else if (c >= ASCIIA && c<= ASCIIZ) {
    int position_from_A = c - ASCIIA;
    int codechar = ASCIIZ - position_from_A;
    return codechar;
  }
}
