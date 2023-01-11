#include <stdio.h>

int main()
{
    int arr[100], size, i, pos;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &pos);

   
    for(i=pos-1; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }

    printf("Array after deleting an element: ");
    for(i=0; i<size-1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
