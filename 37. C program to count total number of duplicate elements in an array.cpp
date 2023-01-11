#include <stdio.h>

#define ARRAY_SIZE 10

int main(void) {
  int array[ARRAY_SIZE] = {1, 2, 3, 3, 4, 4, 4, 5, 5, 5};
  int i, j;
  int count = 0;

  for (i = 0; i < ARRAY_SIZE; i++) {
    for (j = i + 1; j < ARRAY_SIZE; j++) {
      if (array[i] == array[j]) {
        count++;
        break;
      }
    }
  }

  printf("The total number of duplicate elements is %d\n", count);

  return 0;
}
