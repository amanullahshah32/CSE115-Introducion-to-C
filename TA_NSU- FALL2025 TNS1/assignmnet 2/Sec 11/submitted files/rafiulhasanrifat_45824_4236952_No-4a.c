#include <stdio.h>
void rev_arr(int arr1[], int rev_arr1[], int size)
{
    int j = 0;
    for(int i = size - 1; i >= 0; i--)
    {
        rev_arr1[j] = arr1[i];
        j++;
    }
}
int main()
{
    int arr1[] = {10, 20, 30, 40, 50};
    int rev_arr1[5];
    int size = 5;
    rev_arr(arr1, rev_arr1, size);
    printf("Reversed array:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", rev_arr1[i]);
    }
    return 0;
}
