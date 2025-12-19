#include <stdio.h>
#include <stdlib.h>

//2) Write a C program to delete an element from index k (value from user) in an array of all unique integers.


int main()
{
     int n, k;

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

    for (int i = k; i < n - 1; i++)
    {
         arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
