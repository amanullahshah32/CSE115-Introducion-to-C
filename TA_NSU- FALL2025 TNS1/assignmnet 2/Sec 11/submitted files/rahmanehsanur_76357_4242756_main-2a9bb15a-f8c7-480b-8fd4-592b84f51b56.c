#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    printf("Enter order of matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    int diaSum = 0;
    for(int i = 0; i < n; i++)
        diaSum += A[i][i];


    int borderSum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0 || i ==n-1 || j ==0 || j ==n-1)
                borderSum += A[i][j];
        }
    }


    int maxRowSum = 0;
    for(int i = 0; i <n; i++)
    {
        int rowSum = 0;
        for(int j = 0; j< n; j++)
            rowSum += A[i][j];

        if(rowSum> maxRowSum)
            maxRowSum =rowSum;
    }


    int maxColSum =0;
    for(int j= 0; j <n; j++)
    {
        int colSum =0;
        for(int i =0; i< n; i++)
            colSum += A[i][j];

        if(colSum >maxColSum)
            maxColSum =colSum;
    }


    printf("\nUpper Right Triangle:\n");
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j <n; j++)
        {
            if(j >= i)
                printf("%d ", A[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }


    printf("\nLower Right Triangle:\n");
    for(int i =0; i<n;i++)
    {
        for(int j =0; j< n; j++)
        {
            if(j >=n - i-1)
                printf("%d ",A[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\nSum of main diagonal = %d", diaSum);
    printf("\nSum of border elements = %d", borderSum);
    printf("\nMaximum row sum = %d", maxRowSum);
    printf("\nMaximum column sum = %d", maxColSum);

    return 0;
}


