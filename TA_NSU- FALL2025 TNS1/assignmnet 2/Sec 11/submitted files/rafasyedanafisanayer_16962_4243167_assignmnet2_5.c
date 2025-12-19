#include <stdio.h>

int main() {
    int a[3][3];
    int diagonalSum = 0;
    int borderSum = 0;
    int rowSum;
    int colSum;
    int maxRowSum = 0;
    int maxColSum = 0;

    printf("Consider the following 2D array:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        diagonalSum += a[i][i];
    }
    printf("Sum of main diagonal element: %d\n", diagonalSum);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == 0 || i == 2 || j == 0 || j == 2) {
                borderSum += a[i][j];
            }
        }
    }
    printf("Sum of border element: %d\n", borderSum);

    for(int i = 0; i < 3; i++) {
        rowSum = 0;
        for(int j = 0; j < 3; j++) {
            rowSum += a[i][j];
        }
        printf("Row%d sum: %d\n", i, rowSum);
        if(rowSum > maxRowSum)
            maxRowSum = rowSum;
    }
    printf("Maximum row sum: %d\n", maxRowSum);

    for(int j = 0; j < 3; j++) {
        colSum = 0;
        for(int i = 0; i < 3; i++) {
            colSum += a[i][j];
        }
        printf("Column%d sum: %d\n", j, colSum);
        if(colSum > maxColSum)
            maxColSum = colSum;
    }
    printf("Maximum column sum: %d\n", maxColSum);

    return 0;
}
