#include <stdio.h>
#include <stdlib.h>

void RevArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    RevArr(arr, n);

    printf("Reversed array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
