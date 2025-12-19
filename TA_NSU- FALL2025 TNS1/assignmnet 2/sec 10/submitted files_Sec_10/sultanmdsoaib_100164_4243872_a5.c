#include <stdio.h>

void rev_arr(int arr1[], int rev_arr1[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        rev_arr1[i] = arr1[size - i - 1];
    }
}

int main()
{
    int arr[5];
    int rev[5];
    int i;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    rev_arr(arr, rev, 5);

    printf("Reversed array:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", rev[i]);
    }

    return 0;
}

