#include <stdio.h>
#include <stdbool.h>

int main() {
  bool there_is_whitespace;
  int c;

  while((c = getchar()) != EOF ) {
    if (c != ' ') {
      there_is_whitespace = false;
    }
    else if (c == ' ' && there_is_whitespace) {
      c = 0;
    } else {
      there_is_whitespace = true;
    }

    putchar(c);
  }  
}
