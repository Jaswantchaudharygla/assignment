#include <stdio.h>

int main() {
    float marks[5];
    float total = 0;
    float average;
    float percentage;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    average = total / 5;
    percentage = (total / 500) * 100;

    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Percentage: %.2f\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A+\n");
    } else if (percentage >= 80) {
        printf("Grade: A\n");
    } else if (percentage >= 70) {
        printf("Grade: B+\n");
    } else if (percentage >= 60) {
        printf("Grade: B\n");
    } else if (percentage >= 50) {
        printf("Grade: C+\n");
    } else if (percentage >= 40) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}
