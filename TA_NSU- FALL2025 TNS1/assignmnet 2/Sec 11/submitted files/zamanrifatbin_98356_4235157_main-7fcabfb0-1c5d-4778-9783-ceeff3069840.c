#include <stdio.h>
#include <stdlib.h>

int main()
{
    int main()
     {
    int a[3][3] = {
        {13, 3, 4},
        {5, 6, 7},
        {10, 8, 9}
    };

    int sumDiag = 0, sumBorder = 0;
    int maxRowSum = 0, maxColSum = 0;

    for(int i = 0; i < 3; i++)
        sumDiag += a[i][i];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == 0 || i == 2 || j == 0 || j == 2)
                sumBorder += a[i][j];
        }
    }

    printf("Sum of main diagonal element: %d\n", sumDiag);
    printf("Sum of border element: %d\n", sumBorder);

    for(int i = 0; i < 3; i++) {
        int rowSum = 0;
        for(int j = 0; j < 3; j++)
            rowSum += a[i][j];
        printf("Row%d sum: %d\n", i, rowSum);
        if(rowSum > maxRowSum)
            maxRowSum = rowSum;
    }
    printf("Maximum row sum: %d\n", maxRowSum);

    for(int j = 0; j < 3; j++) {
        int colSum = 0;
        for(int i = 0; i < 3; i++)
            colSum += a[i][j];
        printf("Column%d sum: %d\n", j, colSum);
        if(colSum > maxColSum)
            maxColSum = colSum;
    }
    printf("Maximum column sum: %d\n", maxColSum);

    return 0;
}



}
