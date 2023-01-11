#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    switch (side1 == side2) {
        case 1:
            switch (side2 == side3) {
                case 1:
                    printf("The triangle is equilateral.");
                    break;
                case 0:
                    printf("The triangle is isosceles.");
            }
            break;
        case 0:
            switch (side2 == side3) {
                case 1:
                    printf("The triangle is isosceles.");
                    break;
                case 0:
                    printf("The triangle is scalene.");
            }
    }

    return 0;
}
