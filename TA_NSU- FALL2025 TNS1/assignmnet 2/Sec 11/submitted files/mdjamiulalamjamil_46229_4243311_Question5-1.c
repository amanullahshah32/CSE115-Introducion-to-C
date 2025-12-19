#include <stdio.h>

int main() {
    int n;
    printf("Enter array size (n x n): ");
    scanf("%d", &n);

    int arr[n][n];

    // Take input
    printf("Enter %dx%d elements:\n", n, n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // a) Sum of main diagonal
    int diag_sum = 0;
    for(int i = 0; i < n; i++) {
        diag_sum += arr[i][i];
    }
    printf("Sum of main diagonal: %d\n", diag_sum);

    // b) Sum of border elements
    int border_sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1) {
                border_sum += arr[i][j];
            }
        }
    }
    printf("Sum of border elements: %d\n", border_sum);

    // c) Maximum row sum
    int max_row_sum = 0;
    for(int i = 0; i < n; i++) {
        int row_sum = 0;
        for(int j = 0; j < n; j++) {
            row_sum += arr[i][j];
        }
        if(row_sum > max_row_sum) {
            max_row_sum = row_sum;
        }
    }
    printf("Maximum row sum: %d\n", max_row_sum);

    // d) Maximum column sum
    int max_col_sum = 0;
    for(int j = 0; j < n; j++) {
        int col_sum = 0;
        for(int i = 0; i < n; i++) {
            col_sum += arr[i][j];
        }
        if(col_sum > max_col_sum) {
            max_col_sum = col_sum;
        }
    }
    printf("Maximum column sum: %d\n", max_col_sum);

    // e) Display upper right triangle
    printf("Upper right triangle:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j >= i) {
                printf("%d ", arr[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // f) Display lower right triangle
    printf("Lower right triangle:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j >= n - i - 1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
