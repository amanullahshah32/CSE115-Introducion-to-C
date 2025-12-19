#include <stdio.h>
#include <stdlib.h>

//7) Write a C program to count the total number of duplicate (more than once) element in an array of integers.

int main()
{
    int n, i, j, count, dup = 0;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                count = -1;
                break;
            }
        }

        if(count != -1)
        {
            for(j = i + 1; j < n; j++)
            {
                if(arr[i] == arr[j])
                    count++;
            }

            if(count > 0)
                dup++;
        }
    }

    printf("Total number of duplicate elements: %d\n", dup);

    return 0;
}
