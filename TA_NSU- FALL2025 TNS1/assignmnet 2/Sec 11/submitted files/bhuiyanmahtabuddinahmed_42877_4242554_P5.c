#include <stdio.h>

int main()
{
    int row , col;

    printf("Enter row ");
    scanf("%d",&row);

    printf("Enter column ");
    scanf("%d",&col);

    int a[row][col];

    printf("Enter elements\n");
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&a[i][j]);

    printf("Your array is\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
//a
    int diag=0;
    for(int i=0;i<row && i<col;i++)
        diag+=a[i][i];

    printf("Sum of main diagonal element %d\n",diag);
//b
    int border=0;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            if(i==0 || i==row-1 || j==0 || j==col-1)
                border+=a[i][j];

    printf("Sum of border element %d\n",border);
//c
    int maxRow=0;
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
            sum+=a[i][j];

        printf("Row %d sum %d\n",i,sum);

        if(i==0 || sum>maxRow)
            maxRow=sum;
    }

    printf("Maximum row sum %d\n",maxRow);
//d
    int maxCol=0;
    for(int j=0;j<col;j++)
    {
        int sum=0;
        for(int i=0;i<row;i++)
            sum+=a[i][j];

        printf("Column%d sum %d\n",j,sum);

        if(j==0 || sum>maxCol)
            maxCol=sum;
    }

    printf("Maximum column sum %d\n",maxCol);
//e
    printf("Upper right triangle\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(j>=i)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
//f
    printf("Lower right triangle\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(j>=row-i-1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
