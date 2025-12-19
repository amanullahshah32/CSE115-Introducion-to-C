//Rohan Rajib Chowdhury
//ID 2312932043

//No 4. a)using array notation
#include <stdio.h>

int main()
{
    int arr1[5] = {10, 20, 30, 40, 50};
    int rev_arr1[5];
    int i;

    rev_arr(arr1, rev_arr1, 5);

    printf("Reversed array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", rev_arr1[i]);
    }

    return 0;
}
void rev_arr(int arr1[], int rev_arr1[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}
