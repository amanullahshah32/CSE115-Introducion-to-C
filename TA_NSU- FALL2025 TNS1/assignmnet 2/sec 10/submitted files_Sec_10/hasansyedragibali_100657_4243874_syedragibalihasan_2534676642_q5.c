#include<stdio.h>

 void main()
{
    printf("Enter size of column and rows: ");
    int n;
    scanf("%d", &n);
    int a[n][n];
    int i,j;
    printf("Enter elements in array:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    int sumdiagonal=0;
    for(i = 0; i < n; i++)
    {
       sumdiagonal+=a[i][i];
    }
    printf("The sum of the diagonal is: %d \n", sumdiagonal);
    int bordersum = 0;
    for(i = 0; i < n; i++)
     {
        for(j = 0; j < n; j++)
        {
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
            {
                bordersum += a[i][j];
            }
        }
    }
    printf("The sum of the border is: %d \n", bordersum);

    int maxrow=0;
    for(j=0;j<n;j++)
    {
        maxrow+=a[0][j];
    }
    for(i=0;i<n;i++)
    {
        int rowsum = 0;
        for(j=0; j<n;j++)
        {
            rowsum += a[i][j];
        }

        if(rowsum > maxrow)
            maxrow = rowsum;
    }
    printf("The maximum row sum is: %d \n", maxrow);
    int maxcol=0;
    for(i=0;i<n;i++)
    {
        maxcol+= a[i][0];

    }
    for(j=0;j<n;j++)
    {
        int colsum=0;
        for(i=0;i<n;i++)
        {
            colsum+=a[i][j];
        }
        if(colsum > maxcol)
            maxcol = colsum;
    }
    printf("The maximum column sum is: %d \n",maxcol);
    printf("Upper Right triangle \n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i)
                printf("%d",a[i][j]);
            else
                printf(" ");

        }
        printf("\n");
    }
    printf("Lower Right triangle \n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=n-1-i)
                printf("%d",a[i][j]);
            else
                printf(" ");

        }
        printf("\n");

    }

}

