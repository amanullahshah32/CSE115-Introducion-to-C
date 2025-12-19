#include <stdio.h>
#include <stdlib.h>

//1) Write a C program to modify an element in index k (value from user) in an array of all unique integers.

int main()
{
    int n, k, replaced_value;

    printf("enter array size:\n");
    scanf("%d", &n);

    int arr[n];

    printf("enter the array elements:\n", n);
    for (int i = 0; i < n; i++)
        {
        scanf("%d", &arr[i]);
        }

    printf("Enter index k: \n");
    scanf("%d", &k);

    printf("Enter value for kth element: ");
    scanf("%d", &replaced_value);

    arr[k] = replaced_value;

    printf("Array after replacing:\n");
    for (int i = 0; i < n; i++)
        {
        printf("%d ", arr[i]);
        }

    return 0;
}
