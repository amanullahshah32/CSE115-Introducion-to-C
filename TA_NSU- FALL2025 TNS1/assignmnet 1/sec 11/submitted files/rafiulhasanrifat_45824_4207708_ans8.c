#include <stdio.h>
int RevArr(int arr[], int size);
int main()
{
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d integers: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    RevArr(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int RevArr(int arr[], int size)
{
    int temp;
    int start = 0;
    int end = size - 1;

    while (start < end)
    {

        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return 0;
}

