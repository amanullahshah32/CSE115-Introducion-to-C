#include <stdio.h>

int max(int *p, int size)
{
    int i;
    int max = *p;

    for (i = 1; i < size; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
    }

    return max;
}

int main()
{
    int num, i;

    printf("Enter the number of elements");
    scanf("%d", &num);

    int a[num]; 
    for (i = 0; i < num; i++)
    {
        printf("Enter element %d", i + 1);
        scanf("%d", &a[i]);
    }

    int biggest = max(a, num);
    printf("biggest element = %d\n", biggest);

    return 0;
}