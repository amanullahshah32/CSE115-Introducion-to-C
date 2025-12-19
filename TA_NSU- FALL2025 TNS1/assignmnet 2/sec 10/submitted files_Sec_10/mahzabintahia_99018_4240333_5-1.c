#include<stdio.h>
int main()
{
    int r, c, i, j;
    printf("enter row count: ");
    scanf("%d", &r);
    printf("enter column count: ");
    scanf("%d", &c);
    int arr[r][c];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d", &arr[i][j]);
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    int sumDia=0;
    for(i=0; i<r; i++)
    {
        sumDia+= arr[i][i];
    }
    printf("sum of main diagonal: %d\n", sumDia);

    int sumBord=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            if(i==0|| i==r-1|| j==0|| j==c-1)
                sumBord+= arr[i][j];
    }
    printf("sum of border elements: %d\n", sumBord);

    int maxRow=0, rowSum=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            rowSum += arr[i][j];
        if(rowSum > maxRow)
            maxRow = rowSum;
        printf("Row%d sum: %d\n", i, rowSum);
    }
    printf("maximum row sum: %d\n", maxRow);

    int maxCol=0, colSum=0;
    for(j=0; j<c; j++)
    {
        for(i=0; i<r; i++)
            colSum += arr[i][j];
        if(colSum > maxCol)
            maxCol = colSum;
        printf("col%d sum: %d\n", j, colSum);
    }
    printf("maximum col sum: %d\n", maxCol);

    printf("upper right triangle: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(j>=i)
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("lower right triangle: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
        {
            if(i>=j)
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
