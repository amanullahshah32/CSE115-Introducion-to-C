#include <stdio.h>

void rev_arr(int *arr1, int *rev_arr1, int size);
void rev_arr2(int arr1[], int rev_arr1[], int size);

void rev_arr(int *arr1, int *rev_arr1, int size)
{
    int i;
    for(i = 0; i < size; i++)
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
}

void rev_arr2(int arr1[], int rev_arr1[], int size)
{
    int i;
    for(i = 0; i < size; i++)
        rev_arr1[i] = arr1[size - 1 - i];
}

int main()
{
    int size, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr1[size], rev_arr1[size];

    printf("Enter elements:\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr1[i]);


    rev_arr(arr1, rev_arr1, size);

    printf("Reversed array:\n");
    for(i = 0; i < size; i++)
        printf("%d ", rev_arr1[i]);

    return 0;
}
