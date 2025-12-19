#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n][n];


    printf("Enter elements:");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    int mainDiagSum = 0;
    for(int i = 0; i < n; i++)
    {
        mainDiagSum += a[i][i];
    }


    int borderSum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
            {
                borderSum += a[i][j];
            }
        }
    }


    int maxRowSum = 0;
    for(int i = 0; i < n; i++)
    {
        int rowSum = 0;
        for(int j = 0; j < n; j++)
        {
            rowSum += a[i][j];
        }
        if(i == 0 || rowSum > maxRowSum)
            maxRowSum = rowSum;
    }


    int maxColSum = 0;
    for(int j = 0; j < n; j++)
    {
        int colSum = 0;
        for(int i = 0; i < n; i++)
        {
            colSum += a[i][j];
        }
        if(j == 0 || colSum > maxColSum)
            maxColSum = colSum;
    }


    printf("\nSum of main diagonal elements = %d\n", mainDiagSum);
    printf("Sum of border elements = %d\n", borderSum);
    printf("Maximum row sum = %d\n", maxRowSum);
    printf("Maximum column sum = %d\n", maxColSum);


    printf("\nUpper Right Triangle:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j >= i)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }


    printf("\nLower Right Triangle:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j >= n - i - 1)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
