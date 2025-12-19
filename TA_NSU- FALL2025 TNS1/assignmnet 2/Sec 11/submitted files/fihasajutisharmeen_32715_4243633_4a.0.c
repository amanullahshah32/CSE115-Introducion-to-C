#include <stdio.h>
#include <stdlib.h>

//4) Write code for a function that uses an array to store the elements of another array in reverse order. Use the following function prototype:
//a)void rev_arr(int arr1[], int rev_arr1[], int size);

void rev_arr(int arr1[], int rev_arr1[], int size)
{
    int i;
    int j;

    j = size - 1;

    for(i = 0; i < size; i++)
    {
        rev_arr1[i] = arr1[j];
        j--;
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int rev_arr1[5];
    int i;

    rev_arr(arr1, rev_arr1, 5);

    printf("Reversed array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", rev_arr1[i]);
    }

    return 0;
}
