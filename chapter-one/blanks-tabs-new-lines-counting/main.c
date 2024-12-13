#include <stdio.h>

/* count lines in input */
int main() {
  int c, nl, bl, tb;

  nl = 0;
  bl = 0;
  tb = 0;

  while ((c = getchar()) != EOF) {
     if (c == '\n')
       ++nl;

     if (c == ' ')
       ++bl;

     if (c == '\t')
       ++tb;
  }
  
  printf("%d, %d, %d\n", nl, bl, tb);
}
