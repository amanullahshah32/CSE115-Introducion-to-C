//num a
#include <stdio.h>
#include <stdlib.h>



  void rev_arr(int arr1[], int rev_arr1[], int size) {
    for(int i = 0; i < size; i++) {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

int main()
 {
    int arr1[] = {1, 2, 3, 4, 5};
    int rev_arr1[5];

    rev_arr(arr1, rev_arr1, 5);

    for(int i = 0; i < 5; i++)
        printf("%d ", rev_arr1[i]);

    return 0;
}

\\numb

void rev_arr(int *arr1, int *rev_arr1, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main()
{
    int arr1[5] = {10, 20, 30, 40, 50};
    int rev_arr1[5];
    int size = 5, i;

    rev_arr(arr1, rev_arr1, size);

    printf("Reversed Array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", rev_arr1[i]);
    }

    return 0;
}






