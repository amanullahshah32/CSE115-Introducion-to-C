#include <stdio.h>

int main() {
    int rows = 3, cols = 3; // Based on sample input size
    int arr[3][3];
    int i, j;

    // Taking input [cite: 6]
    printf("Enter elements for 3x3 matrix:\n");
    for(i=0; i<rows; i++) {
        for(j=0; j<cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculations
    int sumDiagonal = 0;
    int sumBorder = 0;
    int maxRowSum = -99999, maxColSum = -99999;
    int currentRowSum, currentColSum;

    for(i=0; i<rows; i++) {
        currentRowSum = 0;
        for(j=0; j<cols; j++) {
            currentRowSum += arr[i][j];

            // a) Sum of main diagonal
            if(i == j) sumDiagonal += arr[i][j];

            // b) Sum of border elements [cite: 7]
            if(i==0 || j==0 || i==rows-1 || j==cols-1) {
                sumBorder += arr[i][j];
            }
        }
        // c) Max Row Sum
        if(currentRowSum > maxRowSum) maxRowSum = currentRowSum;
        printf("Row%d sum: %d\n", i, currentRowSum);
    }

    // d) Max Column Sum
    for(j=0; j<cols; j++) {
        currentColSum = 0;
        for(i=0; i<rows; i++) {
            currentColSum += arr[i][j];
        }
        if(currentColSum > maxColSum) maxColSum = currentColSum;
        printf("Column%d sum: %d\n", j, currentColSum);
    }

    printf("\nSum of main diagonal element: %d\n", sumDiagonal);
    printf("Sum of border element: %d\n", sumBorder);
    printf("Maximum row sum: %d\n", maxRowSum);
    printf("Maximum column sum: %d\n", maxColSum);

    // e) Display Upper Right Triangle (j >= i)
    printf("\nUpper Right Triangle:\n");
    for(i=0; i<rows; i++) {
        for(j=0; j<cols; j++) {
            if(j >= i) printf("%d ", arr[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    // f) Display Lower Right Triangle (Usually implies elements below anti-diagonal or i >= j depending on definition.
    // Here we assume standard 'Lower Right' quadrant relative to anti-diagonal: i + j >= size - 1)
    printf("\nLower Right Triangle:\n");
    for(i=0; i<rows; i++) {
        for(j=0; j<cols; j++) {
            if(i + j >= cols - 1) printf("%d ", arr[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}
