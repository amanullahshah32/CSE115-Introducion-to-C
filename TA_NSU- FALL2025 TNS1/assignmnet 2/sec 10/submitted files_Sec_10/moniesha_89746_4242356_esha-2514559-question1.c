#include <stdio.h>

int max(int *p, int size)
 {
    int i, max = *p;
    for(i = 1; i < size; i++)
    {
        if(*(p + i) > max)
            max = *(p + i);
    }
    return max;
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("ENTER NUMBER: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Maximum number is  = %d\n", max(arr, n));
    return 0;
}

