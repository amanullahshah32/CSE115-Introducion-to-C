#include <stdio.h>

int main()
{
    int n,diagSum=0,maxRowSum=0,maxColSum=0,borderSum=0,colSum=0;
    printf("Enter matrix size: ");
    scanf("%d",&n);
    int Matrix[n][n];

    printf("Enter elements:\n");
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            scanf("%d",&Matrix[i][j]);

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
                diagSum+=Matrix[i][j];
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==0 || i==n-1 || j==0 || j==n - 1)
                borderSum+=Matrix[i][j];
        }
    }

    printf("Sum of main diagonal element: %d\n", diagSum);
    printf("Sum of border element: %d\n", borderSum);

    for (int i=0;i<n;i++)
    {
        int rowSum=0;
        for (int j=0;j<n;j++)
            rowSum+=Matrix[i][j];

        printf("Row%d sum: %d\n",i,rowSum);
        if (rowSum > maxRowSum)
            maxRowSum = rowSum;
    }
    for (int j=0;j<n;j++)
    {
        int colSum=0;
        for (int i=0;i<n;i++)
            colSum+=Matrix[i][j];

        printf("Column%d sum: %d\n",j,colSum);
        if (colSum > maxColSum)
            maxColSum = colSum;
    }
    printf("Maximum column sum: %d\n", maxColSum);

    printf("Upper right triangle:\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<i;j++)
        {
            printf("  ");
        }
        for (int j=i;j<n;j++)
        {
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            printf("  ");
        }
        for (int j=n-i-1;j<n;j++)
        {
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }
}

