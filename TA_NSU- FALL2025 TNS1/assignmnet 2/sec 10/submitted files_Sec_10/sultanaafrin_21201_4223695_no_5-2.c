#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int matrix[3][3];

    // 1. Take Input
    printf("Enter 3x3 matrix elements:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A) Sum of Main Diagonal
    int diagSum = 0;
    for(int i=0; i<rows; i++) {
        diagSum += matrix[i][i];
    }
    printf("sum of main diagonal elements: %d\n", diagSum);

    // B) Sum of Border Elements

    int borderSum = 0;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if (i==0 || i==rows-1 || j==0 || j==cols-1) {
                borderSum += matrix[i][j];
            }
        }
    }
    printf("Sum of border elements: %d\n", borderSum);

    // C) Maximum Row Sum
    int maxRowSum = 0;
    for(int i=0; i<rows; i++) {
        int currentLineSum = 0;
        for(int j=0; j<cols; j++) {
            currentLineSum += matrix[i][j];
        }
        if(currentLineSum > maxRowSum) maxRowSum = currentLineSum;
    }
    printf("Maximum row sum: %d\n", maxRowSum);

    // D) Maximum Column Sum
    int maxColSum = 0;
    for(int j=0; j<cols; j++) {
        int currentColSum = 0;
        for(int i=0; i<rows; i++) {
            currentColSum += matrix[i][j];
        }
        if(currentColSum > maxColSum) maxColSum = currentColSum;
    }
    printf("Maximum column sum: %d\n", maxColSum);

    // E) Display Upper Right Triangle
    printf("Upper Right Triangle:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(j >= i) printf("%d ", matrix[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    // F) Display Lower Right Triangle
    printf("Lower Right Triangle:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(i + j >= rows - 1) printf("%d ", matrix[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}
