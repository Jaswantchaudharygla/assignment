#include <stdio.h>

int main(void) {
  int n, i, first = 0, second = 1, next;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci series: ");

  for (i = 1; i <= n; ++i) {
    printf("%d, ", first);
    next = first + second;
    first = second;
    second = next;
  }

  return 0;
}
