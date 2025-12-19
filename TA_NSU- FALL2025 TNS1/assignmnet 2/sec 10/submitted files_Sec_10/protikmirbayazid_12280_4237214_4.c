#include <stdio.h>


void rev_arr(int arr1[], int rev_arr1[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}


void rev_arr_ptr(int *arr1, int *rev_arr1, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main()
{
    int arr1[100], rev_arr1[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    rev_arr(arr1, rev_arr1, n);
    printf("Reversed array using array notation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", rev_arr1[i]);
    }

    printf("\n");

    rev_arr_ptr(arr1, rev_arr1, n);
    printf("Reversed array using pointer notation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", rev_arr1[i]);
    }

    return 0;
}

