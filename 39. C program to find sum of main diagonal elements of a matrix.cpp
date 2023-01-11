#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int main(void) {
  int matrix[ROWS][COLUMNS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int i;
  int sum = 0;

  for (i = 0; i < ROWS; i++) {
    sum += matrix[i][i];
  }

  printf("The sum of the main diagonal elements is %d\n", sum);

  return 0;
}
