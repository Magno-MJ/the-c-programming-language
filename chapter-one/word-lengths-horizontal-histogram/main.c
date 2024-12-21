#include <stdio.h>

int main() {
  int word_length = 0;
  int words_was_sent = 0;
  int header_was_printed = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      if (!words_was_sent) {
        printf("###############################\n");
        printf("# WORDS HORIZONTAL HISTOGRAM #\n");
        printf("###############################\n");

        words_was_sent = 1;
      } else {
        printf(": ");     
      }

      while (word_length > 0) {
        printf("*");
        --word_length;
      }

      printf("\n");
    } else {
      if (!words_was_sent) {
        printf("###############################\n");
        printf("# WORDS HORIZONTAL HISTOGRAM #\n");
        printf("###############################\n");

        words_was_sent = 1;
      }
      
      putchar(c);

      ++word_length;
    }
  }
}
