// Md. Rizuan Al Masud Raeen
// 2212398642
// Assignment 02
// Question 04

/* 4. Write code for a function that uses an array to store the elements
of another array in reverse order.
Use the following function prototype:
a)void rev_arr(int arr1[], int rev_arr1[], int size);
b)void rev_arr(int *arr1, int *rev_arr1, int size); */

#include <stdio.h>
#include <stdlib.h>

void rev_arr(int arr1[], int rev_arr1[], int size)
{
    int j = 0;

    for(int i = size - 1; i >= 0; i--)
    {
        rev_arr1[j] = arr1[i];
        j++;
    }
}

void rev_arr_pointer(int *arr1, int *rev_arr1, int size)
{
    for(int i = 0; i < size; i++)
    {
        *(rev_arr1 + i) = *(arr1 + (size - 1 - i));
    }
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], rev1[n], rev2[n];
    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    rev_arr(arr, rev1, n);
    rev_arr_pointer(arr, rev2, n);

    printf("Reversed array (array version): ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", rev1[i]);
    }

    printf("\nReversed array (pointer version): ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", rev2[i]);
    }

    return 0;
}


