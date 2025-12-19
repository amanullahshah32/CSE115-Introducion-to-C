#include <stdio.h>

int main()
{
    int row, col;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d",&col);

    int a[row][col];

     printf("Enter elements of the array:\n");
     for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }


    int diagSum = 0;
    for (i = 0; i < row && i < col; i++)
    {
        diagSum +=a[i][i];
    }
    printf("Sum of main diagonal element: %d\n", diagSum);


     int borderSum = 0;
    for (i =0; i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {
                borderSum += a[i][j];
            }
        }
    }
     printf("Sum of border elements: %d\n", borderSum);


     int maxRowSum = 0;
    for (i = 0; i < row; i++)
    {
        int rowSum = 0;
        for (j =0;j<col;j++)
        {
            rowSum+=a[i][j];
        }

        printf("Row%d sum: %d\n", i, rowSum);

        if (i == 0 || rowSum > maxRowSum)
        {
            maxRowSum = rowSum;
        }
    }
    printf("Maximum row sum: %d\n", maxRowSum);


     int maxColSum = 0;
    for (j=0;j <col;j++)
    {
        int colSum =0;
        for (i =0; i<row;i++)
        {
            colSum +=a[i][j];
        }

        printf("Column%d sum: %d\n", j, colSum);

        if (j==0||colSum>maxColSum)
        {
            maxColSum=colSum;
        }
    }
     printf("Maximum column sum: %d\n", maxColSum);


    printf("Upper right triangle:\n");
     for (i=0;i<row;i++)
    {
        for (j =0;j<col;j++)
        {
            if (j>=i)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }


    printf("Lower right triangle:\n");
    for (i = 0; i < row; i++)
       {
        for (j=0;j<col;j++)
        {
            if (j >= col - i - 1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
