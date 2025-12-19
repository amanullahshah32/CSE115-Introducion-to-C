#include <stdio.h>

void revArrPtr(int *arr1, int *rev_arr1, int size)
{
    int mah = 0;
    while(mah < size)
    {
        *(rev_arr1 + mah) = *(arr1 + size - 1 - mah);
        mah++;
    }
}

int main()
{
    int n;
    printf("Enter how many number");
    scanf("%d", &n);

    int arr1[n], rev_arr1[n];

    printf("Enter the numbers one by one\n");

    for(int i = 0; i < n; i++)

        scanf("%d", &arr1[i]);

    revArrPtr(arr1, rev_arr1, n);

    printf("Reversed array \n");
    for(int i = 0; i < n; i++)
        printf("%d ", rev_arr1[i]);

    return 0;
}

