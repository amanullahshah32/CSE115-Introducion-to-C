#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Input the number of elements to be stored in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input elements are: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("Total number of duplicate element found in array: %d", count);

    return 0;
}
