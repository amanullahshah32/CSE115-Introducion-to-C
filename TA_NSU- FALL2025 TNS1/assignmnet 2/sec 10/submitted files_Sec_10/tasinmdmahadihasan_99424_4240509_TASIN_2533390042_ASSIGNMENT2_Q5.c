#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the number of row: ");
    scanf("%d", &row);
    printf("\nEnter the number of coloumn: ");
    scanf("%d", &col);

    int i,j;
    int array[row][col];
    printf("\nThe array elements are:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    //a)sum of main diagonal element
    int sum_dig=0;
    for(i=0;i<row && i<col;i++)
    {
            sum_dig+=array[i][i];
    }
    printf("\nThe sum of the main diagonal element:%d",sum_dig);

    //b)sum of border elements
    int sum_bor=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==0 || i==row-1 || j==0 || j==col-1)
                sum_bor+=array[i][j];
        }
    }
    printf("\nThe sum of the border element:%d",sum_bor);

    //c) maximum row sum
    int max_row_sum=0;
    for(i=0;i<row;i++)
    {
        int row_sum=0;
        for(j=0;j<col;j++)
        {
            row_sum+=array[i][j];
        }
        printf("\nRow%d sum: %d", i, row_sum);
        if(row_sum>max_row_sum)
            max_row_sum=row_sum;
    }
    printf("\nThe maximum row sum: %d",max_row_sum);

    //d) maximum column sum
    int max_col_sum=0;
    for(j=0;j<col;j++)
    {
        int col_sum=0;
        for(i=0;i<row;i++)
        {
            col_sum+=array[i][j];
        }
        printf("\nColoumn%d sum: %d", j, col_sum);
        if(col_sum>max_col_sum)
            max_col_sum=col_sum;
    }
    printf("\nThe maximum coloumn sum: %d",max_col_sum);

    //e)display upper right triangle
    printf("\nThe upper right triangle:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(j>=i)
                printf("%d ",array[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }

    //display lower right triangle
    printf("\nThe lower right triangle:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(j>=col-i-1)
                printf("%d ",array[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
