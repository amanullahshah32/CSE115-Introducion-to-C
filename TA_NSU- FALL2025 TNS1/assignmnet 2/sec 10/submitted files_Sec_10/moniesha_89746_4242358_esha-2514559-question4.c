#include <stdio.h>

void rev_arr_array(int arr1[], int rev_arr1[], int size)
 {
    int i;
    for(i = 0; i < size; i++)
    {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}


void rev_arr_pointer(int *arr1, int *rev_arr1, int size)
 {
    int i;
    for(i = 0; i < size; i++)
    {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main()
 {
    int arr[100], rev1[100], rev2[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    rev_arr_array(arr, rev1, n);

    rev_arr_pointer(arr, rev2, n);

    printf("\nOriginal Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nReversed Array (Using Array):\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", rev1[i]);
    }

    printf("\n\nReversed Array (Using Pointer):\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", rev2[i]);
    }

    return 0;
}
