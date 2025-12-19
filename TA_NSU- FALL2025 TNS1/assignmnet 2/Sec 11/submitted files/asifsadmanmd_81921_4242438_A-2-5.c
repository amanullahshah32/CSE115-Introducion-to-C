#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    int A[row][col];

    printf("Enter Matrix elements:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int diagSum = 0;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(i == j)
            {
                diagSum = diagSum + A[i][j];
            }
        }
    }
    printf("Sum of main diagonal element: %d\n", diagSum);

    int borderSum = 0;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {
                borderSum = borderSum + A[i][j];
            }
        }
    }
    printf("Sum of border element: %d\n", borderSum);

    int maxRowSum = -999999;
    for(i = 0; i < row; i++)
    {
        int currentSum = 0;
        for(j = 0; j < col; j++)
        {
            currentSum = currentSum + A[i][j];
        }
        printf("Row%d sum: %d\n", i, currentSum);

        if(currentSum > maxRowSum)
        {
            maxRowSum = currentSum;
        }
    }
    printf("Maximum row sum: %d\n", maxRowSum);

    int maxColSum = -999999;
    for(j = 0; j < col; j++)
    {
        int currentSum = 0;
        for(i = 0; i < row; i++)
        {
            currentSum = currentSum + A[i][j];
        }
        printf("Column%d sum: %d\n", j, currentSum);

        if(currentSum > maxColSum)
        {
            maxColSum = currentSum;
        }
    }
    printf("Maximum column sum: %d\n", maxColSum);

    printf("Upper right triangle:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(j >= i)
            {
                printf("%d ", A[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("Lower right triangle:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(i + j >= col - 1)
            {
                printf("%d ", A[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
