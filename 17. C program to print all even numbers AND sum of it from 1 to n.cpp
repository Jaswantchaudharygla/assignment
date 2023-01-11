#include <stdio.h>

int main(void) {
  int n, i, sum = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (i = 2; i <= n; i += 2) {
    printf("%d ", i);
    sum += i;
  }
  printf("\nSum = %d", sum);

  return 0;
}
