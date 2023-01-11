#include <stdio.h>
#include <math.h>

int main(void) {
  int n, i, num, last_digit, digits, sum, original;
  bool is_armstrong;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  printf("All Armstrong numbers between 1 and %d are:\n", n);

  for (i = 1; i <= n; ++i) {
    sum = 0;
    num = i;
    original = num;
    digits = (int)log10(num) + 1;

    while (num > 0) {
      last_digit = num % 10;
      sum += pow(last_digit, digits);
      num /= 10;
    }

    if (original == sum) {
      printf("%d ", original);
    }
  }

  printf("\nEnter a number to check if it is an Armstrong number: ");
  scanf("%d", &num);
  original = num;
  sum = 0;
  digits = (int)log10(num) + 1;

  while (num > 0) {
    last_digit = num % 10;
    sum += pow(last_digit, digits);
    num /= 10;
  }

  is_armstrong = (original == sum);
  printf("%d is ", original);
  if (is_armstrong) {
    printf("an Armstrong number.");
  } else {
    printf("not an Armstrong number.");
  }

  return 0;
}
