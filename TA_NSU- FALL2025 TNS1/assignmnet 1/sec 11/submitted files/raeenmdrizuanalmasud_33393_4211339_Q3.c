/* 3. Write a C program to insert an element in index k (value from user) in an array of all
unique integers. */

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, k, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index k to insert: ");
    scanf("%d", &k);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if(k >= 0 && k <= n)
    {
        for(i = n; i > k; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[k] = value;
        n++;
    }
    else
    {
        printf("Invalid index");
        return 0;
    }

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
