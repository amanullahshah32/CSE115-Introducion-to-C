#include <stdio.h>
#include <stdlib.h>

int max(int *p, int size)
{
    int maximum = *p;

    for(int i = 1; i < size; i++)
    {
        if(*(p+i) > maximum)
        {
            maximum = *(p+i);
        }
    }
    return maximum;
}

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = max(arr, size);
    printf("Largest element: %d\n", result);

    return 0;
}
