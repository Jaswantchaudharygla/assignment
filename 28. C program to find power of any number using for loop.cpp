#include <stdio.h>

int main(void) {
  int base, exponent, result = 1;

  printf("Enter base: ");
  scanf("%d", &base);

  printf("Enter exponent: ");
  scanf("%d", &exponent);

  for (int i = 1; i <= exponent; ++i) {
    result *= base;
  }

  printf("%d to the power of %d is %d\n", base, exponent, result);

  return 0;
}
