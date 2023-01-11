#include <stdio.h>

#define ARRAY_SIZE 10

void bubble_sort(int array[], int size) {
  int i, j;
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

int main(void) {
  int array[ARRAY_SIZE] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int second_largest;

  bubble_sort(array, ARRAY_SIZE);

  second_largest = array[ARRAY_SIZE - 2];
  printf("The second largest number is %d\n", second_largest);

  return 0;
}
