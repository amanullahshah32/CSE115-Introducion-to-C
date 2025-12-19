#include <stdio.h>

int main()
{
    int a[10][10];
    int i, j, r, c;
    int diagSum = 0, borderSum = 0;
    int rowSum, colSum;
    int maxRowSum = 0, maxColSum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    for (i = 0; i < r; i++)
    {
        diagSum += a[i][i];
    }
    printf("\nSum of main diagonal element: %d\n", diagSum);


    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
            {
                borderSum += a[i][j];
            }
        }
    }
    printf("Sum of border element: %d\n", borderSum);

    for (i = 0; i < r; i++)
    {
        rowSum = 0;
        for (j = 0; j < c; j++)
        {
            rowSum += a[i][j];
        }
        printf("Row%d sum: %d\n", i, rowSum);

        if (rowSum > maxRowSum)
        {
            maxRowSum = rowSum;
        }
    }
    printf("Maximum row sum: %d\n", maxRowSum);

    for (j = 0; j < c; j++)
    {
        colSum = 0;
        for (i = 0; i < r; i++)
        {
            colSum += a[i][j];
        }
        printf("Column%d sum: %d\n", j, colSum);

        if (colSum > maxColSum)
        {
            maxColSum = colSum;
        }
    }
    printf("Maximum column sum: %d\n", maxColSum);


    printf("\nUpper right triangle:\n");
    for (i = 0; i < r; i++)
    {
        for (j = i; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    printf("\nLower right triangle:\n");
    for (i = 0; i < r; i++)
    {
        for (j = c - i - 1; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

