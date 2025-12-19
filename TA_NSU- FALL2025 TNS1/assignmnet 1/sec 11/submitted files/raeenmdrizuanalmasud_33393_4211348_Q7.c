/* 7. Write a C program to count the total number of duplicate (more than once) element in
an array of integers.
Sample input/output:
Input the number of elements to be stored in array: 5
Input elements are: 9 15 13 15 9
Expected output: Total number of duplicate element found in array: 2 */

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, count, duplicates = 0;
    int visited[100] = {0};

    printf("Input the number of elements to be stored in array: ");
    scanf("%d", &n);

    printf("Input elements are:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(visited[i] == 0)
        {
            count = 1;
            for(j = i + 1; j < n; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    visited[j] = 1;
                }
            }
            if(count > 1)
            {
                duplicates++;
            }
        }
    }

    printf("Total number of duplicate element found in array: %d\n", duplicates);

    return 0;
}

