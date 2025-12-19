#include <stdio.h>

int main()
{
    int n;
    printf("Input the number of elements to be stored in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input elements are: ");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int duplicateCount = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicateCount++;
                break;
            }
        }
    }

    printf("Total number of duplicate element found in array: %d\n", duplicateCount);

    return 0;
}
