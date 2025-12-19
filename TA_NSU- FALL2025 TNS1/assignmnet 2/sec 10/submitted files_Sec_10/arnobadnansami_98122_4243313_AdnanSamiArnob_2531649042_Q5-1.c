#include <stdio.h>
int main(void) {
    int n;
    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter %d elements (row by row):\n", n * n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    int diag_sum = 0;
    for (int i = 0; i < n; ++i) {diag_sum += a[i][i];}
    printf("\nSum of main diagonal element: %d\n", diag_sum);
    int border_sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                border_sum += a[i][j];
            }
        }
    }
    printf("Sum of border element: %d\n", border_sum);
    int max_row_sum = 0; 
    for (int i = 0; i < n; ++i) {
        int row_sum = 0;
        for (int j = 0; j < n; ++j) row_sum += a[i][j];
        printf("Row%d sum: %d\n", i, row_sum);
        if (row_sum > max_row_sum) max_row_sum = row_sum;
    }
    printf("Maximum row sum: %d\n", max_row_sum);
    int max_col_sum = 0;
    for (int j = 0; j < n; ++j) {
        int col_sum = 0;
        for (int i = 0; i < n; ++i) col_sum += a[i][j];
        printf("Column%d sum: %d\n", j, col_sum);
        if (col_sum > max_col_sum) max_col_sum = col_sum;
    }
    printf("Maximum column sum: %d\n", max_col_sum);
    printf("\nUpper triangular (including main diagonal):\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j >= i)
                printf("%4d", a[i][j]);
            else
                printf("    ");
        }
        printf("\n");
    }
    printf("\nLower triangular (including main diagonal):\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j <= i)
                printf("%4d", a[i][j]);
            else
                printf("    ");
        }
        printf("\n");
    }
}