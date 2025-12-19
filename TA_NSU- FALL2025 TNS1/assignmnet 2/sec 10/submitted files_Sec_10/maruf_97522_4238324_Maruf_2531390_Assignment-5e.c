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
    printf("Upper right triangle:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
           if(i<=j) printf("%d ",arr[i][j]);
           else     printf("  ");
        }
        printf("\n");
    }
}
