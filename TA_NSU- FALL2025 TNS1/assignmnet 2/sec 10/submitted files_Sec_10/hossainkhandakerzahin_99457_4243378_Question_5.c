#include<stdio.h>
int main()
{   int rowA,colA;
    printf("enter the rowA:");
    scanf("%d",&rowA);

    printf("Enter the colA:");
    scanf("%d",&colA);

    int arr[rowA][colA];

    for(int i=0;i<rowA;i++)
    {
        for(int j=0;j<colA;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("the matrix:\n");
    for(int i=0;i<rowA;i++)
    {
        for(int j=0;j<colA;j++)
        {
            printf("%10d",arr[i][j]);
        }
        printf("\n");
    }

    int sum=0;
    for(int i=0;i<rowA;i++)
    {
        for(int j=0;j<colA;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }

    }
    printf("Sum of Diagonal Elements:%d\n",sum);

    int borderSum = 0;
    for (int i=0; i<rowA; i++)
    {
        for (int j=0;j<colA;j++) {
            if (i== 0 || i==rowA-1 || j==0 || j==colA-1) {
                borderSum =borderSum+arr[i][j];
            }
        }
    }
    printf("Sum of border Elements:%d\n",borderSum);

    int maxRowSum = 0;
    for (int i=0; i<rowA; i++)
    {
        int rowSum=0;
        for (int j=0; j<colA; j++) {
            rowSum=rowSum+arr[i][j];
        }
        if (rowSum > maxRowSum) {
            maxRowSum = rowSum;
        }
    }
    printf("Maximum row sum:%d\n",maxRowSum);

    int maxColSum = 0;
    for (int j=0; j<colA; j++)
    {
        int colSum=0;
        for (int i=0; i<rowA; i++) {
            colSum=colSum+arr[i][j];
        }
        if (colSum > maxColSum) {
            maxColSum =colSum;
        }
    }
    printf("Maximum colsum:%d\n",maxColSum);

     if (rowA==colA)
    {
        printf("\nUpper right triangle:\n");
        for (int i =0;i<rowA;i++)
        {
            for (int j=0;j<colA;j++)
            {
                if (j>= i)
                    printf("%d\t",arr[i][j]);
                else
                    printf("\t");
            }
            printf("\n");
        }
    } else
    {
        printf("\nnon square matrix.\n");
    }

    if (rowA==colA)
        {
        printf("\nLower right triangle:\n");
        for (int i=0; i<rowA;i++)
        {
            for (int j=0; j<colA; j++)
                {
                if (j >=rowA-i-1)
                    printf("%d\t",arr[i][j]);
                else
                    printf("\t");
            }
            printf("\n");
        }
    } else {
        printf("\nnon square matrix.\n");
    }

}
