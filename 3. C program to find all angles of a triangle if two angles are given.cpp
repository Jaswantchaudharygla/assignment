#include <stdio.h>

int main(void) {
  int angle1, angle2, angle3;

  printf("Enter the first angle of the triangle: ");
  scanf("%d", &angle1);

  printf("Enter the second angle of the triangle: ");
  scanf("%d", &angle2);

  angle3 = 180 - (angle1 + angle2);
  printf("The third angle of the triangle is: %d\n", angle3);

  return 0;
}
