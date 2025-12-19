#include<stdio.h>


void rev_arr(int *arr1, int *rev_arr1, int size)
{
    int j = size - 1;

    for(int i = 0; i < size; i++)
    {
        *(rev_arr1 + i) = *(arr1 + j);
        j--;
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int rev_arr1[5];

    rev_arr(arr1, rev_arr1, 5);

    printf("Reversed Array:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", rev_arr1[i]);
    }

    return 0;
}