#include <stdio.h>

int main() {
  int c;

  if ((c = getchar()) == EOF) {
    putchar(c);
  }  
}
