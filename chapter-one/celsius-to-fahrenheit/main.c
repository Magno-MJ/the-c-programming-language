#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for celsius = -17.8, -6.7, ..., 148.7 */
int main() {
  printf("\n");
  printf("#################################");
  printf("\n");
  printf("## Celsius to Fahrenheit Table ##");
  printf("\n");
  printf("#################################");
  printf("\n");

  float celsius, fahr;
  float lower, upper, step;

  lower = -17.8; /* lower limit of temperature table */
  upper = 148.9; /* upper limit */
  step = 11.1; /* step size */

  celsius = lower;

  while (celsius <= upper) {
    fahr = (celsius * 1.8) + 32;
    printf("%6.1f %3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
