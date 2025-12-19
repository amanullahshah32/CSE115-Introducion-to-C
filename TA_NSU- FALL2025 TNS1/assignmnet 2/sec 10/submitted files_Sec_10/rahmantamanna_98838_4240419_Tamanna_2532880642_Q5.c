#include<stdio.h>
int main()
{
    int n,i,j,rsum[10],csum[10],diagSum=0,borderSum=0;
    printf("enter size:");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix A:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]==a[j])
                diagSum+=a[i][j];
        }
    }
    printf("Sum of main diagonal: %d\n",diagSum);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==0||i==n-1||j==0||j==n-1)
            {
                borderSum+=a[i][j];
            }
        }
    }
    printf("Sum of border element: %d\n",borderSum);

    for(i=0; i<n; i++)
    {
        rsum[i]=0;
        for(j=0; j<n; j++)
        {
            rsum[i]+=a[i][j];
        }
    }
    printf("\n");


    for(i=0; i<n; i++)
    {
        csum[i]=0;
        for(j=0; j<n; j++)
        {
            csum[i]+=a[j][i];
        }
    }
    printf("\n");

    for(i=0; i<n; i++)
    {
        printf(" sum of row(%d)=%d\n",i,rsum[i]);

    }
    int rMax=0;
    for(i=0; i<n; i++)
    {
        if(rMax<rsum[i])
            rMax=rsum[i];
    }
    printf("Maximum row sum: %d\n",rMax);
    printf("\n");


    for(j=0; j<n; j++)
    {
        printf(" sum of colum(%d)=%d\n ",i,csum[j]);
    }

    int cMax=0;
    for(i=0; i<n; i++)
    {
        if(cMax<csum[i])
            cMax=csum[i];
    }
    printf("\n");
    printf("Maximum colum sum: %d\n",cMax);
    printf("\n");
    printf("Upper right triangle:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i<=j)
            {
                printf("%d  ",a[i][j]==0);
            }
            else
            {
                printf("%d  ",a[i][j]);
            }
        }
        printf("\n");
    }
    printf("lower right triangle:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(n-i-1<=j)
            {
                printf("%d  ",a[i][j]==0);
            }
            else
            {
                printf("%d  ",a[i][j]);
            }
        }
        printf("\n");
    }

}

