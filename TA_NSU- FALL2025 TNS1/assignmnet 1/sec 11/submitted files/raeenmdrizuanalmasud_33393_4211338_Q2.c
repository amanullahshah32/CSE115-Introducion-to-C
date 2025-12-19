/* 2. Write a C program to delete an element from index k (value from user) in an array of
all unique integers */

#include <stdio.h>

int main()
{
    int X[100];
    int n, i, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }

    printf("Enter the index k to delete: ");
    scanf("%d", &k);

    if(k >= 0 && k < n)
    {
        for(i = k; i < n - 1; i++)
        {
            X[i] = X[i + 1];
        }
        n--;
    }
    else
    {
        printf("Invalid index\n");
        return 0;
    }

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", X[i]);
    }

    return 0;
}
