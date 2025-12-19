#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of  columns : ");
    scanf("%d",&c);


    int arr[100][100];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Sum of main diagonal elements
    int diagSum = 0;
    for (int i = 0; i < r && i < c; i++)
    {
        diagSum += arr[i][i];
    }
    printf("Sum of main diagonal element: %d\n", diagSum);

    // Sum of border elements
    int borderSum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
            {
                borderSum += arr[i][j];
            }
        }
    }
    printf("Sum of border element: %d\n", borderSum);

    // Row sums and maximum row sum
    int maxRowSum = 0;
    for (int i = 0; i < r; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < c; j++)
        {
            rowSum += arr[i][j];
        }
        printf("Row%d sum: %d\n", i, rowSum);

        if (i == 0 || rowSum > maxRowSum)
        {
            maxRowSum = rowSum;
        }
    }
    printf("Maximum row sum: %d\n", maxRowSum);

    // Column sums and maximum column sum
    int maxColSum = 0;
    for (int j = 0; j < c; j++)
    {
        int colSum = 0;
        for (int i = 0; i < r; i++)
        {
            colSum += arr[i][j];
        }
        printf("Column%d sum: %d\n", j, colSum);

        if (j == 0 || colSum > maxColSum)
        {
            maxColSum = colSum;
        }
    }
    printf("Maximum column sum: %d\n", maxColSum);

    // Upper right triangle
    printf("Upper right triangle:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Lower right triangle
    printf("Lower right triangle:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", arr[j][c - i + j - 1]);
        }
        printf("\n");
    }

    return 0;
}
