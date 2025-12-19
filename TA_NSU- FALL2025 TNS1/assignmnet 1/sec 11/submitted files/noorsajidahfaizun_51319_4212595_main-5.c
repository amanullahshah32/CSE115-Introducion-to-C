#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count = 0;
    int arr[100], arr1[100] = {0};

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == 1)
        {
            continue;
        }

        int repeat = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                repeat++;
                arr1[j] = 1;
            }
        }

        if (repeat > 1)
        {
            count++;
        }
    }

    printf("\nTotal number of duplicate elements = %d\n", count);
    return 0;
}
