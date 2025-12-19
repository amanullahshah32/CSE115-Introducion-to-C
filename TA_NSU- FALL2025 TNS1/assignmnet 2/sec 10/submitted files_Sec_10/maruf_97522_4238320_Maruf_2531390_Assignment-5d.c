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
    int csum[c];
    for(j=0; j<c; j++)
    {
        sum=0;
        for(i=0; i<r; i++)
        {
            sum=sum+arr[i][j];

        }
        csum[j]=sum;
        printf("\nColumn%d sum=%d",j,sum);
    }
    int max=csum[0];
    for(i=0; i<c; i++)
    {
        if(csum[i]>max) max=csum[i];
    }
    printf("\nMaximum Column sum=%d",max);

}
