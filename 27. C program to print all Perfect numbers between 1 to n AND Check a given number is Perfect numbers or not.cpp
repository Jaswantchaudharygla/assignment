#include <stdio.h>

int main(void) {
  int n, i, j, sum, num;
  bool is_perfect;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  printf("All perfect numbers between 1 and %d are:\n", n);

  for (i = 2; i <= n; ++i) {
    sum = 0;
    for (j = 1; j < i; ++j) {
      if (i % j == 0) {
        sum += j;
      }
    }

    if (sum == i) {
      printf("%d ", i);
    }
  }

  printf("\nEnter a number to check if it is a perfect number: ");
  scanf("%d", &num);
  sum = 0;
  for (i = 1; i < num; ++i) {
    if (num % i == 0) {
      sum += i;
    }
  }

  is_perfect = (sum == num);
  printf("%d is ", num);
  if (is_perfect) {
    printf("a perfect number.");
  } else {
    printf("not a perfect number.");
  }

  return 0;
}
