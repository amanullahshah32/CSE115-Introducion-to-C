#include <stdio.h>

int main()
{
    int n, arr[100];
    printf("Input the number of elements: ");
    scanf("%d", &n);
    printf("Input elements are: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int duplicateCount = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 1;

        if (arr[i] == -999999)
            continue;


        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -999999;
            }
        }

        if (count > 1)
        {
            duplicateCount++;
        }
    }

    printf("Total number of duplicate element found in array: %d\n", duplicateCount);

    return 0;
}

