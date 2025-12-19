#include <stdio.h>
#include <stdlib.h>
#include<string>

int main() {
    int rows,cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Take input
    printf("Enter %d x %d matrix elements:\n", rows, cols);
    for(int i=0;i<rows;i++) {
        for(int j = 0;j<cols;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // a) Sum of main diagonal elements
    int diagonalSum = 0;
    int minSize = (rows < cols) ? rows : cols;
    for(int i = 0; i < minSize; i++) {
        diagonalSum += matrix[i][i];
    }
    printf("Sum of main diagonal elements: %d\n", diagonalSum);

    // b) Sum of border elements
    int borderSum = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                borderSum += matrix[i][j];
            }
        }
    }
    printf("Sum of border elements: %d\n", borderSum);

    // c) Row sums and maximum
    int maxRowSum = 0;
    for(int i = 0; i < rows; i++) {
        int rowSum = 0;
        for(int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row%d sum: %d\n", i, rowSum);

        if(rowSum > maxRowSum) {
            maxRowSum = rowSum;
        }
    }
    printf("Maximum row sum: %d\n", maxRowSum);

    // d) Column sums and maximum
    int maxColSum = 0;
    for(int j = 0; j < cols; j++) {
        int colSum = 0;
        for(int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Column%d sum: %d\n", j, colSum);

        if(colSum > maxColSum) {
            maxColSum = colSum;
        }
    }
    printf("Maximum column sum: %d\n", maxColSum);

    // e) Display upper right triangle
    printf("Upper right triangle:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j >= i) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // f) Display lower right triangle
    printf("Lower right triangle:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j >= cols - i - 1) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
