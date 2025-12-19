#include <stdio.h>
int main()
{
    int n, i, j;
    int diagonal = 0, border = 0;
    int maxRow = 0, maxCol =0;
    int upper =0, lower =0;
       printf("Enter size of array:");
       scanf("%d",&n);
    int arr[n][n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    for (i = 0; i < n; i++)
        diagonal+= arr[i][i];
        
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                border += arr[i][j];

    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = 0; j < n; j++)
            sum += arr[i][j];
        if (sum > maxRow)
            maxRow = sum;
    }

    for (j = 0; j < n; j++)
    {
        int sum = 0;
        for (i = 0; i < n; i++)
            sum += arr[i][j];
        if (sum > maxCol)
            maxCol = sum;
    }

    printf("Sum of main diagonal elements: %d\n", diagonal);
    printf("Sum of border element: %d\n", border);
    printf("Maximum row sum: %d\n", maxRow);    printf("Maximum column sum: %d\n", maxCol);
     printf("Upper triangle:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j>=i)
                printf("%d ", arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
      printf("Lower triangle:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j>=n-i-1)
                printf("%d ", arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}