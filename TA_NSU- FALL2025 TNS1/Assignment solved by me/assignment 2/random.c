
#include <stdio.h>

int max(int *p, int size)
{
    int maxVal = *p;
    for(int i = 1; i < size; i++)
    {
        if(*(p + i) > maxVal)
            maxVal = *(p + i);
    }
    return maxVal;
}

int main()
{
    int arr[] = {3, 9, 2, 15, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum element: %d\n", max(arr, size));
    return 0;
}
