#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;
    int day;

    // Simple calculator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Error! operator is not correct");
            return 0;
    }

    printf("%.1d %c %.1d = %.1d", num1, operator, num2, result);

    // Days of the week
    printf("\nEnter a number between 1 and 7: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Error! Invalid number entered");
    }

    return 0;
}
