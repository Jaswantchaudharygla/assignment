#include <stdio.h>

int main(void) {
  int n, digit, count[10] = {0};

  printf("Enter a number: ");
  scanf("%d", &n);

  while (n > 0) {
    digit = n % 10;
    count[digit]++;
    n /= 10;
  }

  printf("Digit:\t\t");
  for (int i = 0; i < 10; i++) {
    printf("%d\t", i);
  }
  printf("\nFrequency:\t");
  for (int i = 0; i < 10; i++) {
    printf("%d\t", count[i]);
  }

  return 0;
}
