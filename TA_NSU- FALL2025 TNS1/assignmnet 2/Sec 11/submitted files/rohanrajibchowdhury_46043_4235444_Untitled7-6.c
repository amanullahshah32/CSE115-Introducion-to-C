//Rohan Rajib Chowdhury
//ID 2312932043

#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c;
    int i, j;

    int diagSum = 0;
    int borderSum = 0;
    int maxRowSum = 0, maxColSum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the array:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r && i < c; i++)
    {
        diagSum += a[i][i];
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(i == 0 || i == r - 1 || j == 0 || j == c - 1)
                borderSum += a[i][j];
        }
    }


    for(i = 0; i < r; i++)
    {
        int rowSum = 0;
        for(j = 0; j < c; j++)
            rowSum += a[i][j];

        printf("Row%d sum: %d\n", i, rowSum);

        if(rowSum > maxRowSum)
            maxRowSum = rowSum;
    }


    for(j = 0; j < c; j++)
    {
        int colSum = 0;
        for(i = 0; i < r; i++)
            colSum += a[i][j];

        printf("Column%d sum: %d\n", j, colSum);

        if(colSum > maxColSum)
            maxColSum = colSum;
    }

    printf("Sum of main diagonal element: %d\n", diagSum);
    printf("Sum of border element: %d\n", borderSum);
    printf("Maximum row sum: %d\n", maxRowSum);
    printf("Maximum column sum: %d\n", maxColSum);


    printf("Upper right triangle:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(j >= i)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }


    printf("Lower right triangle:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(j >= c - i - 1)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
