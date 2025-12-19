/* 8. Write a C program with a function that will reverse the elements in an array of
integers.
Function Prototype: void RevArr ( int arr[], int size); */

#include <stdio.h>

void RevArr(int arr[], int size)
{
    int i, temp;
    for(i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main()
{
    int arr[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    RevArr(arr, n);

    printf("Reversed array is: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
