#include <stdio.h>

#define ARRAY_SIZE 10

int main(void) {
  int array[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int search_key = 5;
  int found = 0;
  int i;

  for (i = 0; i < ARRAY_SIZE; i++) {
    if (array[i] == search_key) {
      found = 1;
      break;
    }
  }

  if (found) {
    printf("The search key was found at index %d\n", i);
  } else {
    printf("The search key was not found in the array\n");
  }

  return 0;
}
