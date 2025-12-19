#include<stdio.h>

void rev_arr(int *arr1, int *rev_arr1, int size);

int main()
{
    int arr1[100], rev_arr1[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    rev_arr(arr1, rev_arr1, n);

    printf("Reversed array:\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", rev_arr1[i]);
    }
    printf("\n");

    return 0;
}

void rev_arr(int *arr1, int *rev_arr1, int size)
{
    for (int i=0; i<size; i++)
    {
        *(rev_arr1+i)=*(arr1+size-1-i);
    }
}
