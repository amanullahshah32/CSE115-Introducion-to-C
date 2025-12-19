#include <stdio.h>

int max(int *p, int size)
{
    int i, largest;

    largest = *p;

    for (i = 1; i < size; i++)
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
    int arr[100], n, i, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    result = max(arr, n);

    printf("Largest element = %d\n", result);

    return 0;
}
