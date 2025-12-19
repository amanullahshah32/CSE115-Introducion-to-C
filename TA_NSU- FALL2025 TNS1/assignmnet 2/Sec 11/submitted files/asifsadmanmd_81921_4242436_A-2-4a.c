#include <stdio.h>
#include <stdlib.h>

void rev_arr_index(int arr1[], int rev_arr1[], int size)
{
    for(int i = 0; i < size; i++)
    {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

void rev_arr_pointer(int *arr1, int *rev_arr1, int size)
{
    for(int i = 0; i < size; i++)
    {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
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

    rev_arr_pointer(arr, reverse, size);

    printf("Reversed Array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", reverse[i]);
    }
    printf("\n");

    return 0;
}
