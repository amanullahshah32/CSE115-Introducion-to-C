#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];


    printf("Enter the elements of the array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }


    printf("\nThe array is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    int diag_sum = 0;
    int min_dim = (rows < cols) ? rows : cols;
    for(i = 0; i < min_dim; i++) {
        diag_sum += arr[i][i];
    }
    printf("a) Sum of main diagonal elements: %d\n", diag_sum);

    int border_sum = 0;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {

            if(i == 0 || i == rows-1 || j == 0 || j == cols-1) {
                border_sum += arr[i][j];
            }
        }
    }
    printf("b) Sum of border elements: %d\n", border_sum);


    int max_row_sum = 0;
    printf("\nRow sums:\n");
    for(i = 0; i < rows; i++) {
        int row_sum = 0;
        for(j = 0; j < cols; j++) {
            row_sum += arr[i][j];
        }
        printf("  Row %d sum: %d\n", i, row_sum);
        if(row_sum > max_row_sum || i == 0) {
            max_row_sum = row_sum;
        }
    }
    printf("c) Maximum row sum: %d\n", max_row_sum);


    int max_col_sum = 0;
    printf("\nColumn sums:\n");
    for(j = 0; j < cols; j++) {
        int col_sum = 0;
        for(i = 0; i < rows; i++) {
            col_sum += arr[i][j];
        }
        printf("  Column %d sum: %d\n", j, col_sum);
        if(col_sum > max_col_sum || j == 0) {
            max_col_sum = col_sum;
        }
    }
    printf("d) Maximum column sum: %d\n", max_col_sum);


    printf("\ne) Upper right triangle:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(j >= i) {
                printf("%d\t", arr[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }


    printf("\nf) Lower right triangle:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(i + j >= rows - 1) {
                printf("%d\t", arr[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}
