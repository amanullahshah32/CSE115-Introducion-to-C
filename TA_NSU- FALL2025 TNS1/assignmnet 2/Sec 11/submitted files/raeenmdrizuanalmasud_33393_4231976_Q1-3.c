// Md. Rizuan Al Masud Raeen
// 2212398642
// Assignment 02
// Question 01

/* 1. Implement the following function which finds the largest element in an array (use pointer)
int max (int *p, int size); */

#include <stdio.h>
#include <stdlib.h>

int max(int *p, int size)
{
    int largest = *p;

    for(int i = 1; i < size; i++)
    {
        if(*(p + i) > largest)
            largest = *(p + i);
    }

    return largest;
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = max(arr, n);

    printf("Largest element: %d\n", result);

    return 0;
}

