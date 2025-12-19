#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int diagSum = 0, borderSum = 0;

    // a)Main diagonal sum, b) Border sum
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                diagSum += arr[i][j];
            }
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                borderSum += arr[i][j];
            }
        }
    }

    // c)Maximum Row Sum
    int maxRowSum = -9999;
    printf("\n");

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

    // d)Maximum Column Sum
    int maxColSum = -9999;

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

    // e)Upper Right Triangle
    printf("\nUpper Right Triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i)
                printf("%d ", arr[i][j]);
            else
                printf("  "); // space for alignment
        }
        printf("\n");
    }

    // f)Lower Right Triangle
    printf("\nLower Right Triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= n - 1 - i)
                printf("%d ", arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    //Final Outputs
    printf("\nSum of main diagonal element: %d\n", diagSum);
    printf("Sum of border element: %d\n", borderSum);
    printf("Maximum row sum: %d\n", maxRowSum);
    printf("Maximum column sum: %d\n", maxColSum);

    return 0;
}
