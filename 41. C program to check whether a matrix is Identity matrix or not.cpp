#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int main(void) {
  int matrix[ROWS][COLUMNS] = {{1, 0, 0},
                                {0, 1, 0},
                                {0, 0, 1}};
  int i, j;
  int is_identity = 1;

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLUMNS; j++) {
      if (i == j && matrix[i][j] != 1) {
        is_identity = 0;
        break;
      } else if (i != j && matrix[i][j] != 0) {
        is_identity = 0;
        break;
      }
    }
  }

  if (is_identity) {
    printf("The matrix is an identity matrix\n");
  } else {
    printf("The matrix is not an identity matrix\n");
  }

  return 0;
}
