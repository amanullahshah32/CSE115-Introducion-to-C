#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter row and column size of the matrix:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter elements:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    int rsum[r];
    for(i=0; i<r; i++)
    {
        sum=0;
        for(j=0; j<c; j++)
        {
            sum=sum+arr[i][j];

        }
        rsum[i]=sum;
        printf("\nRow%d sum=%d",i,sum);
    }
    int max=rsum[0];
    for(i=0; i<r; i++)
    {
        if(rsum[i]>max) max=rsum[i];
    }
    printf("\nMaximum Row sum=%d",max);

}
