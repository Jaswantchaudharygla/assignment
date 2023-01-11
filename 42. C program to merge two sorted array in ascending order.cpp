#include <stdio.h>

#define ARRAY_SIZE_1 5
#define ARRAY_SIZE_2 8
#define MERGED_ARRAY_SIZE (ARRAY_SIZE_1 + ARRAY_SIZE_2)

int main(void) {
  int array_1[ARRAY_SIZE_1] = {1, 3, 5, 7, 9};
  int array_2[ARRAY_SIZE_2] = {2, 4, 6, 8, 10, 12, 14, 16};
  int merged_array[MERGED_ARRAY_SIZE];
  int i = 0, j = 0, k = 0;

  while (i < ARRAY_SIZE_1 && j < ARRAY_SIZE_2) {
    if (array_1[i] < array_2[j]) {
      merged_array[k] = array_1[i];
      i++;
    } else {
      merged_array[k] = array_2[j];
      j++;
    }
    k++;
  }

  while (i < ARRAY_SIZE_1) {
    merged_array[k] = array_1[i];
    i++;
    k++;
  }

  while (j < ARRAY_SIZE_2) {
    merged_array[k] = array_2[j];
    j++;
    k++;
  }

  for (i = 0; i < MERGED_ARRAY_SIZE; i++) {
    printf("%d ", merged_array[i]);
  }
  printf("\n");

  return 0;
}
