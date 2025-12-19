/* 1. Write a C program to modify an element in index k (value from user) in an array of all
unique integers. */

#include <stdio.h>
int main()
{
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d unique integers:\n", n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Current Array:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


    printf("Enter the index k you want to modify (0 to %d): ", n-1);
    scanf("%d", &k);

    if(k<0 || k>=n)
    {
        printf("Invalid Index!");
        return 0;
    }

    printf("Enter the new value: ");
    scanf("%d", &arr[k]);

    printf("Updated Array:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
