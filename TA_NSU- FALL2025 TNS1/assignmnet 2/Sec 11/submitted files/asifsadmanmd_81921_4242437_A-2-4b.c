#include <stdio.h>
#include <stdlib.h>

void rev_arr(int *arr1, int *rev_arr1, int size)
{
    int *sourceEnd = arr1 + size - 1;

    int *destStart = rev_arr1;

    int i;
    for(i = 0; i < size; i++)
    {
        *destStart = *sourceEnd;
        destStart++;
        sourceEnd--;
    }
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    int reverse[size];

    printf("Enter elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    rev_arr(arr, reverse, size);

    printf("Reversed Array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(reverse+i));
    }
    printf("\n");

    return 0;
}
