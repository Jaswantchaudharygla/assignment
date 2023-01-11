#include <stdio.h>

#define ROWS 5
#define COLUMNS 5

int main(void) {
  int matrix[ROWS][COLUMNS] = {{0, 1, 0, 0, 0},
                                {0, 0, 2, 0, 0},
                                {0, 0, 0, 3, 0},
                                {0, 0, 0, 0, 4},
                                {0, 0, 0, 0, 0}};
  int i, j;
  int is_sparse = 1;
  int is_transpose = 1;

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLUMNS; j++) {
      if (matrix[i][j] != 0) {
        is_sparse = 0;
        break;
      }
    }
  }

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLUMNS; j++) {
      if (matrix[i][j] != matrix[j][i]) {
        is_transpose = 0;
        break;
      }
    }
  }

  if (is_sparse && is_transpose) {
    printf("The matrix is both sparse and transpose\n");
  } else {
    printf("The matrix is not both sparse and transpose\n");
  }

  return 0;
}
