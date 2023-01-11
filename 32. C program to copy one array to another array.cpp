#include <stdio.h>

int main()
{
    int source[100], target[100], size, i;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the source array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &source[i]);
    }

    
    for(i=0; i<size; i++)
    {
        target[i] = source[i];
    }

    printf("Elements of target array: ");
    for(i=0; i<size; i++)
    {
        printf("%d ", target[i]);
    }

    return 0;
}
