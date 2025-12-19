#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int sumDiagonal = 0;
    for(int i = 0; i < rows && i < cols; i++) {
        sumDiagonal += arr[i][i];
    }
    int sumBorder = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == 0 || i == rows-1 || j == 0 || j == cols-1) {
                sumBorder += arr[i][j];
            }
        }
    }
    int maxRowSum = 0;
    for(int i = 0; i < rows; i++) {
        int rowSum = 0;
        for(int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        if(rowSum > maxRowSum) maxRowSum = rowSum;
    }
    int maxColSum = 0;
    for(int j = 0; j < cols; j++) {
        int colSum = 0;
        for(int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        if(colSum > maxColSum) maxColSum = colSum;
    }
    printf("\nUpper right triangle:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j >= i) printf("%d ", arr[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
    printf("\nLower right triangle:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j >= cols - i - 1) printf("%d ", arr[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
    printf("\nSum of main diagonal element: %d\n", sumDiagonal);
    printf("Sum of border element: %d\n", sumBorder);

    for(int i = 0; i < rows; i++) {
        int rowSum = 0;
        for(int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("Row%d sum: %d\n", i, rowSum);
    }
    printf("Maximum row sum: %d\n", maxRowSum);

    for(int j = 0; j < cols; j++) {
        int colSum = 0;
        for(int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("Column%d sum: %d\n", j, colSum);
    }
    printf("Maximum column sum: %d\n", maxColSum);

    return 0;
}
