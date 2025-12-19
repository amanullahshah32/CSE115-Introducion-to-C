#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;
    int diagSum = 0, borderSum = 0;
    int rowSum, colSum, maxRow = 0, maxCol = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Main diagonal sum
    for(i = 0; i < r; i++)
        diagSum += a[i][i];

    // Border sum
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            if(i == 0 || i == r - 1 || j == 0 || j == c - 1)
                borderSum += a[i][j];

    printf("Sum of main diagonal element: %d\n", diagSum);
    printf("Sum of border element: %d\n", borderSum);

    // Row sums
    for(i = 0; i < r; i++)
    {
        rowSum = 0;
        for(j = 0; j < c; j++)
            rowSum += a[i][j];
        printf("Row%d sum: %d\n", i, rowSum);
        if(rowSum > maxRow)
            maxRow = rowSum;
    }
    printf("Maximum row sum: %d\n", maxRow);

    // Column sums
    for(j = 0; j < c; j++)
    {
        colSum = 0;
        for(i = 0; i < r; i++)
            colSum += a[i][j];
        printf("Column%d sum: %d\n", j, colSum);
        if(colSum > maxCol)
            maxCol = colSum;
    }
    printf("Maximum column sum: %d\n", maxCol);

    // Upper right triangle
    printf("Upper right triangle:\n");
    for(i = 0; i < r; i++)
    {
        for(j = i; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    // Lower right triangle
    printf("Lower right triangle:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j <= i; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
