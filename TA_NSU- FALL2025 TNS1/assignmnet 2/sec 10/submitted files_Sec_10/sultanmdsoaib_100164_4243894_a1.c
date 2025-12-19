#include <stdio.h>

int max(int *p, int size)
{
    int i;
    int maxValue;

    maxValue = *p;

    for (i = 1; i < size; i++)
    {
        if (*(p + i) > maxValue)
        {
            maxValue = *(p + i);
        }
    }

    return maxValue;
}

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Largest element = %d\n", max(arr, 5));

    return 0;
}
