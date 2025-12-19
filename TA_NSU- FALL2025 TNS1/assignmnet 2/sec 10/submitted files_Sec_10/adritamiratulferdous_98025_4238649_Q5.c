#include <stdio.h>

int main()
{
    int A[3][3];
    int i, j;
    int diagSum = 0, borderSum = 0;
    int maxRowSum = 0, maxColSum = 0;

    printf("Enter the elements:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i == j)
                diagSum += A[i][j];

            if(i == 0 || j == 0 || i == 2 || j == 2)
                borderSum += A[i][j];
        }
    }

    for(i = 0; i < 3; i++)
    {
        int sum = 0;
        for(j = 0; j < 3; j++)
            sum += A[i][j];

        printf("Row%d sum: %d\n", i, sum);
        if(sum > maxRowSum)
            maxRowSum = sum;
    }

    for(j = 0; j < 3; j++)
    {
        int sum = 0;
        for(i = 0; i < 3; i++)
            sum += A[i][j];

        printf("Column%d sum: %d\n", j, sum);
        if(sum > maxColSum)
            maxColSum = sum;
    }

    printf("Sum of diagonal element: %d\n", diagSum);
    printf("Sum of border element: %d\n", borderSum);
    printf("Maximum number of row sum: %d\n", maxRowSum);
    printf("Maximum number of column sum: %d\n", maxColSum);

    printf("Upper right triangle:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(j >= i)
                printf("%d ", A[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("Lower right triangle:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i >= j)
                printf("%d ", A[j][i]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
