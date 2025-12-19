#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count=0;
    int Arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Unique elements are:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (Arr[i] == Arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%d ", Arr[i]);
        }
    }

    printf("\n");
    return 0;
}
