#include <stdio.h>

int main()
{
    int num, i, j, temp;

    printf("Enter the number of elements");
    scanf("%d", &num);

    int a[num];
    for (i = 0; i < num; i++)
    {
        printf("Enter element %d ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < num - 1; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (*(a + i) > *(a + j))
            {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
    printf("Array in ascending order");
    for (i = 0; i < num; i++)
    {
        printf("%d ", *(a + i));
    }
    printf("\n");

    return 0;
}