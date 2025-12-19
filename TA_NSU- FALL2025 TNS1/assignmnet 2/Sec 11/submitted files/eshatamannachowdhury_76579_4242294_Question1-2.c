#include <stdio.h>

int max(int *p, int size)
{
    int largest = *p;
    for (int i = 1; i < size; i++)
    {
        if (*(p + i) > largest)
        {
            largest = *(p + i);
        }
    }

    return largest;
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = max(arr, n);

    printf("Largest element = %d\n", result);

    return 0;
}
