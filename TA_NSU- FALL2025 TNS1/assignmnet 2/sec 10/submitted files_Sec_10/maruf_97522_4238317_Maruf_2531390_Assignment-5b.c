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
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i==0 || i==r-1 || j==0 || j==c-1)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("\nSum of border elemnets:%d",sum);


}
