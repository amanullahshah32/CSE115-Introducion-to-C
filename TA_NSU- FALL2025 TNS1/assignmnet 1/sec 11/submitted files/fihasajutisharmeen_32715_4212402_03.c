#include <stdio.h>
#include <stdlib.h>

//3) Write a C program to insert an element in index k (value from user) in an array of all unique integers.

int main() {
    int n, k, index_value;

    printf("Enter array size: \n");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index k to insert at: ");
    scanf("%d", &k);

    printf("Enter index_value to insert: ");
    scanf("%d", &index_value);

    for (int i = n; i > k; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[k] = index_value;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

