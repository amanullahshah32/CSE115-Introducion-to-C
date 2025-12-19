#include <stdio.h>


void rev_arr(int arr1[], int rev_arr1[], int size)
{
    for (int i = 0; i < size; i++)
    {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

int main()
{
    int original[] = {1, 2, 3, 4, 5};
    int size = sizeof(original) / sizeof(original[0]);
    int reversed[size];


    rev_arr(original, reversed, size);


    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", original[i]);
    }

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", reversed[i]);
    }

    return 0;
}
