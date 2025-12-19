#include <stdio.h>


void rev_arr_standard(int arr1[], int rev_arr1[], int size)
{
    for(int i = 0; i < size; i++)
    {
        rev_arr1[size - 1 - i] = arr1[i];
    }
}


void rev_arr_pointer(int *arr1, int *rev_arr1, int size)
{
    for(int i = 0; i < size; i++)
    {
        *(rev_arr1 + (size - 1 - i)) = *(arr1 + i);
    }
}

int main()
{
    int original[] = {10,40,70,90,110};
    int reversed[5];


    rev_arr_pointer(original, reversed, 5);

    printf("Reversed: ");
    for(int i=0; i<5; i++) printf("%d ", reversed[i]);

    return 0;
}
