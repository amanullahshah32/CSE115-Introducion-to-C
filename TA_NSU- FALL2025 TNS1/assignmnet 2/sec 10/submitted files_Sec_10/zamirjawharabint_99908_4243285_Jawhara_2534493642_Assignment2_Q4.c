#include <stdio.h>

#include<stdio.h>
void rev_arr(int arr1[], int rev_arr1[], int size)
{
    for(int i=0; i<size; i++)
        rev_arr1[i]= arr1[size-i-1];
}

void rev_arrPtr(int *arr1[], int *rev_arr1[], int size)
{
    for(int i=0; i<size; i++)
        *(rev_arr1+i)= *(arr1+size-1-i);
}

int main()
{
    int arr[5]= {1,2,3,4,5}, rev[5];
    rev_arr(arr, rev, 5);
    for(int i=0; i<5; i++)
        printf("%d ", rev[i]);
    return 0;
}

