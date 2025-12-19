#include <stdio.h>

int main()
{
    int a[10][10];
    int n,i,j;
    int diagSum=0,borderSum=0;
    int rowSum,colSum;
    int maxRowSum=0,maxColSum=0;

    printf("Enter order of matrix: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    /* Sum of main diagonal */
    for(i=0;i<n;i++)
    {
        diagSum=diagSum+a[i][i];
    }

    /* Sum of border elements */
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1)
            {
                borderSum=borderSum+a[i][j];
            }
        }
    }

    /* Row sums and maximum row sum */
    for(i=0;i<n;i++)
    {
        rowSum=0;
        for(j=0;j<n;j++)
        {
            rowSum=rowSum+a[i][j];
        }
        printf("Row%d sum: %d\n",i,rowSum);

        if(rowSum>maxRowSum)
        {
            maxRowSum=rowSum;
        }
    }

    /* Column sums and maximum column sum */
    for(j=0;j<n;j++)
    {
        colSum=0;
        for(i=0;i<n;i++)
        {
            colSum=colSum+a[i][j];
        }
        printf("Column%d sum: %d\n",j,colSum);

        if(colSum>maxColSum)
        {
            maxColSum=colSum;
        }
    }

    printf("Sum of main diagonal element: %d\n",diagSum);
    printf("Sum of border element: %d\n",borderSum);
    printf("Maximum row sum: %d\n",maxRowSum);
    printf("Maximum column sum: %d\n",maxColSum);

    /* Upper right triangle */
    printf("Upper right triangle:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    /* Lower right triangle */
    printf("Lower right triangle:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=n-i-1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
