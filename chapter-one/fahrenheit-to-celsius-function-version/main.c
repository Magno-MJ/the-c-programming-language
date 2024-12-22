#include <stdio.h>

double convert_fahr_to_celsius(int fahr);

int main() {
  int fahr;

  for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
    printf("%3d %6.1f\n", fahr, convert_fahr_to_celsius(fahr));
  }
}

double convert_fahr_to_celsius(int fahr) {
  return (5.0 / 9.0) * (fahr - 32);
}
