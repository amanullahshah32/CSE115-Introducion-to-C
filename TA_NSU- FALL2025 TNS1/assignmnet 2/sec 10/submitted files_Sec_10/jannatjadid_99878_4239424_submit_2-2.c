#include <stdio.h>
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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Array in ascending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(arr + i));
    }
    printf("\n");

    return 0;
}