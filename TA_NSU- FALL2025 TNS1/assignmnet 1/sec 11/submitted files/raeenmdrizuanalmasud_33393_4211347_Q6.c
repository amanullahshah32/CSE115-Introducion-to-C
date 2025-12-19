/* 6. Write a C program to display all unique elements (elements that occur only once) in
an array of integers */

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements are: ");
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
