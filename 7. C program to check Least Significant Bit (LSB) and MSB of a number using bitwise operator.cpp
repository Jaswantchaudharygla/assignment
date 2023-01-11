#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check least significant bit (LSB)
    if (num & 1) {
        printf("LSB is set (1).\n");
    } else {
        printf("LSB is not set (0).\n");
    }

    // Check most significant bit (MSB)
    if (num & (1 << (sizeof(int) * 8 - 1))) {
        printf("MSB is set (1).\n");
    } else {
        printf("MSB is not set (0).\n");
    }

    return 0;
}
