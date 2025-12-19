#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int matrix[3][3];

    // Take Input
    printf("Enter elements for a 3x3 matrix:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum_diagonal = 0;
    int sum_border = 0;
    int row_sums[3] = {0};
    int col_sums[3] = {0};
    int max_row_sum = -999999;
    int max_col_sum = -999999;

    // Calculations
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            // Diagonal
            if(i == j) sum_diagonal += matrix[i][j];

            // Border
            if(i == 0 || i == rows-1 || j == 0 || j == cols-1) sum_border += matrix[i][j];

            // Accumulate Row and Column sums
            row_sums[i] += matrix[i][j];
            col_sums[j] += matrix[i][j];
        }
    }

    // Find maximums
    for(int i=0; i<rows; i++) {
        if(row_sums[i] > max_row_sum) max_row_sum = row_sums[i];
    }
    for(int i=0; i<cols; i++) {
        if(col_sums[i] > max_col_sum) max_col_sum = col_sums[i];
    }

    // Output strictly following sample order
    printf("Sum of main diagonal element: %d\n", sum_diagonal);
    printf("Sum of border element: %d\n", sum_border);

    for(int i=0; i<rows; i++) printf("Row%d sum: %d\n", i, row_sums[i]);
    printf("Maximum row sum: %d\n", max_row_sum);

    for(int i=0; i<cols; i++) printf("Column%d sum: %d\n", i, col_sums[i]);
    printf("Maximum column sum: %d\n", max_col_sum);

    printf("\nUpper Right Triangle:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(j >= i) printf("%d ", matrix[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    printf("\nLower Right Triangle:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(i + j >= cols - 1) printf("%d ", matrix[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}
