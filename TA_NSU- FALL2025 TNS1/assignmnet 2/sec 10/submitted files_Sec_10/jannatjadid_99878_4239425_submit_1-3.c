#include <stdio.h>
int max(int *p, int size)
{
    int max = *p;
    for (int i = 1; i < size; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
    }
    return max;
}
int main()
{
    int n;
    printf("\n enter size:");
    scanf("%d", &n);
    int arr[n];
    printf("\n enter elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int res = max(arr, n);
    printf("\nlargest element in the array: %d", res);
    return 0;
}