#include <stdio.h>

void revArr(int arr1[], int rev_arr1[], int size)
{
    int mah;
    for(mah = 0; mah < size; mah++)
        rev_arr1[mah] = arr1[size - 1 - mah];
}

int main()
{
    int n;
    printf("Enter array size");

    scanf("%d", &n);

    int arr1[n], rev_arr1[n];

    printf("Enter array elements\n");

    for(int i = 0; i < n; i++)

        scanf("%d", &arr1[i]);

    revArr(arr1, rev_arr1, n);

    printf("Reversed array\n");

    for(int i = 0; i < n; i++)
        printf("%d ", rev_arr1[i]);

    return 0;
}

