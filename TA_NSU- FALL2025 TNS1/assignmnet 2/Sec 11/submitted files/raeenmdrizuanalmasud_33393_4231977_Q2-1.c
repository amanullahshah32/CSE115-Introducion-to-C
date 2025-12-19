// Md. Rizuan Al Masud Raeen
// 2212398642
// Assignment 02
// Question 02

/* 2. Write a code to arrange elements of array in ascending order
(use pointers). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(*(arr + j) < *(arr + i))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("Ascending order: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}

