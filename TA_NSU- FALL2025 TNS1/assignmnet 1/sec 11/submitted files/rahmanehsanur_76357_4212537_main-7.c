#include <stdio.h>
#include <stdlib.h>

void RevArr(int arr[], int size)
{
    int start = 0, end = size - 1;
    int temp;

    while (start < end)
    {

        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        {
        scanf("%d", &arr[i]);
        }

    RevArr(arr, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
        {
        printf("%d ", arr[i]);
       }

    printf("\n");
    return 0;
}
