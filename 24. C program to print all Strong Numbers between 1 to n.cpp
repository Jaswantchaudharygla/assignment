#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int n, i, j, last_digit, sum;
  bool is_strong;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  printf("All strong numbers between 1 and %d are:\n", n);

  for (i = 1; i <= n; ++i) {
    sum = 0;
    j = i;
    is_strong = true;

    while (j > 0) {
      last_digit = j % 10;
      j /= 10;

      int fact = 1;
      for (int k = 1; k <= last_digit; ++k) {
        fact *= k;
      }

      sum += fact;
    }

    if (sum == i) {
      printf("%d ", i);
    }
  }

  return 0;
}
