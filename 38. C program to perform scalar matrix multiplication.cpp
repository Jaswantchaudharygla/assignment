#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int main(void) {
  int matrix[ROWS][COLUMNS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int scalar = 2;
  int i, j;

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLUMNS; j++) {
      matrix[i][j] *= scalar;
    }
  }

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLUMNS; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
