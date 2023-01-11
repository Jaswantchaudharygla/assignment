#include <stdio.h>

int main(void) {
  printf("ASCII values of all characters:\n");

  for (int i = 0; i < 256; ++i) {
    printf("%d: %c\n", i, i);
  }

  return 0;
}
