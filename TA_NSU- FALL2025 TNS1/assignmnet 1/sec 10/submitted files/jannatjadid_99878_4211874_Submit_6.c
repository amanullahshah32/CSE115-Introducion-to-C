#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements: ");

    for (int i = 0; i < n; i++)
    {
        int isduplicate = 0;
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {

                isduplicate = 2;
                break;
            }
        }
        if (isduplicate == 2)
        {
            continue;
        }

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                isduplicate = 1;
                break;
            }
        }

        if (isduplicate == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
