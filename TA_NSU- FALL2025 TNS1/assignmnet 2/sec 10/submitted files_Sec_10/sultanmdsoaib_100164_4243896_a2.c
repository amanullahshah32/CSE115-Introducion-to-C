#include <stdio.h>

int main()
{
    int arr[5];
    int *p;
    int i, j, temp;

    p = arr;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", p + i);
    }

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("Ascending order:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}