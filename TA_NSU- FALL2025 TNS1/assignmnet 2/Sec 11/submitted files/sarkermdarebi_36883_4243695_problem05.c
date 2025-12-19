#include <stdio.h>

int main() {
    int a[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    int diagSum = 0;
    for (int i = 0; i < 3; i++)
        diagSum += a[i][i];
    printf("Sum of main diagonal element: %d\n", diagSum);

    int borderSum = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (i == 0 || i == 2 || j == 0 || j == 2)
                borderSum += a[i][j];
    printf("Sum of border element: %d\n", borderSum);

    int maxRowSum = -1;
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++)
            rowSum += a[i][j];
        printf("Row%d sum: %d\n", i, rowSum);
        if (rowSum > maxRowSum)
            maxRowSum = rowSum;
    }
    printf("Maximum row sum: %d\n", maxRowSum);

    int maxColSum = -1;
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++)
            colSum += a[i][j];
        printf("Column%d sum: %d\n", j, colSum);
        if (colSum > maxColSum)
            maxColSum = colSum;
    }
    printf("Maximum column sum: %d\n", maxColSum);

    return 0;
}
