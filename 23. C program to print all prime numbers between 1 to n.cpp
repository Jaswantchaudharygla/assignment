#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int n, i, j;
  bool is_prime;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  printf("All prime numbers between 1 and %d are:\n", n);

  for (i = 2; i <= n; ++i) {
    is_prime = true;

    for (j = 2; j <= i / 2; ++j) {
      if (i % j == 0) {
        is_prime = false;
        break;
      }
    }

    if (is_prime) {
      printf("%d ", i);
    }
  }

  return 0;
}
