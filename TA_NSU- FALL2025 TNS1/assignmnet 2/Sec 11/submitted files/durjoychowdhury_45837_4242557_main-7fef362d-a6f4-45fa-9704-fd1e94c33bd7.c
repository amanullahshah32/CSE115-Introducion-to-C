#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    /* a) Sum of main diagonal */
    int diagSum = 0;
    for (int i = 0; i < n; i++) {
        diagSum += arr[i][i];
    }
    printf("Sum of main diagonal element: %d\n", diagSum);

    /* b) Sum of border elements */
    int borderSum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                borderSum += arr[i][j];
            }
        }
    }
    printf("Sum of border element: %d\n", borderSum);

    /* c) Row sums and maximum row sum */
    int maxRowSum = 0;
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += arr[i][j];
        }
        printf("Row%d sum: %d\n", i, rowSum);
        if (rowSum > maxRowSum) {
            maxRowSum = rowSum;
        }
    }
    printf("Maximum row sum: %d\n", maxRowSum);

    /* d) Column sums and maximum column sum */
    int maxColSum = 0;
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += arr[i][j];
        }
        printf("Column%d sum: %d\n", j, colSum);
        if (colSum > maxColSum) {
            maxColSum = colSum;
        }
    }
    printf("Maximum column sum: %d\n", maxColSum);

    /* e) Upper right triangle */
    printf("Upper right triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    /* f) Lower right triangle */
    printf("Lower right triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
