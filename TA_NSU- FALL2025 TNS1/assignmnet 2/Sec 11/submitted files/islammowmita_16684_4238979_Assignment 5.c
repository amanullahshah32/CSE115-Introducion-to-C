#include <stdio.h>

int main() {
    int a[3][3];
    int i, j;
    int diagSum = 0, borderSum = 0;
    int maxRowSum = 0, maxColSum = 0;

    printf("Enter 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);


    for (i = 0; i < 3; i++)
        diagSum += a[i][i];


    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (i == 0 || i == 2 || j == 0 || j == 2)
                borderSum += a[i][j];


    for (i = 0; i < 3; i++) {
        int rowSum = 0;
        for (j = 0; j < 3; j++)
            rowSum += a[i][j];
        if (rowSum > maxRowSum)
            maxRowSum = rowSum;
    }


    for (j = 0; j < 3; j++) {
        int colSum = 0;
        for (i = 0; i < 3; i++)
            colSum += a[i][j];
        if (colSum > maxColSum)
            maxColSum = colSum;
    }

    printf("Sum of main diagonal element: %d\n", diagSum);
    printf("Sum of border element: %d\n", borderSum);
    printf("Maximum row sum: %d\n", maxRowSum);
    printf("Maximum column sum: %d\n", maxColSum);

    printf("Upper right triangle:\n");
    for (i = 0; i < 3; i++) {
        for (j = i; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }


    printf("Lower right triangle:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j <= i; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
