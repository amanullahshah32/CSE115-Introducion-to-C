#include <stdio.h>

int max(int *p, int size)
{
    int largest = *p;
    for (int i = 1; i < size; i++)
    {
        if (*(p + i) > largest)
            largest = *(p + i);
    }
    return largest;
}

int main()
{
    int arr[] = {10, 25, 8, 45, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = max(arr, size);
    printf("Largest element: %d\n", largest);

    return 0;
}
