#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ? printf("'%c' is an alphabet.\n", ch) :
    (ch >= '0' && ch <= '9') ? printf("'%c' is a digit.\n", ch) :
    printf("'%c' is a special character.\n", ch);

    return 0;
}
