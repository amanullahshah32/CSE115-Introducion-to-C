#include <stdio.h>
#include <stdlib.h>

//5) Consider a 2D array, take input from the user. Then, find
//a) sum of main diagonal element,
//b) sum of border elements,
//c) maximum row sum,
//d) maximum column sum,
//e)display upper right triangle,
//f)display lower right triangle .

int main()
{
    int a[3][3];
    int i;
    int j;
    int sum;
    int maxRow;
    int maxCol;
    int rowSum;
    int colSum;

    printf("Enter elements of 3x3 matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

/* a) sum of main diagonal */
    sum = 0;
    for(i = 0; i < 3; i++)
    {
        sum = sum + a[i][i];
    }
    printf("Sum of main diagonal element: %d\n", sum);

/* b) sum of border elements */
    sum = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i == 0 || i == 2 || j == 0 || j == 2)
            {
                  sum = sum + a[i][j];
            }
        }
    }
    printf("Sum of border element: %d\n", sum);

/* c) row sums and maximum row sum */
    maxRow = 0;
    for(i = 0; i < 3; i++)
    {
        rowSum = 0;
        for(j = 0; j < 3; j++)
        {
            rowSum = rowSum + a[i][j];
        }
        printf("Row%d sum: %d\n", i, rowSum);
        if(rowSum > maxRow)
        {
            maxRow = rowSum;
        }
    }
    printf("Maximum row sum: %d\n", maxRow);

/* d) column sums and maximum column sum */
    maxCol = 0;
    for(j = 0; j < 3; j++)
    {
        colSum = 0;
        for(i = 0; i < 3; i++)
        {
            colSum = colSum + a[i][j];
        }
        printf("Column%d sum: %d\n", j, colSum);
        if(colSum > maxCol)
        {
             maxCol = colSum;
        }
    }
    printf("Maximum column sum: %d\n", maxCol);

/* e) upper right triangle */
    printf("Upper right triangle:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = i; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

/* f) lower right triangle */
    printf("Lower right triangle:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 2 - i; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
