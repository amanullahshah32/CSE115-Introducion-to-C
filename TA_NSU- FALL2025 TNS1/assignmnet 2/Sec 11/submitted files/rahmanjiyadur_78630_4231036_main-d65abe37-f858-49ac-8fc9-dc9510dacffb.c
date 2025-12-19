#include <stdio.h>
#include <stdlib.h>

/*
5) Consider a 2D array, take input from the user. Then, find a) sum of main diagonal element, b)
sum of border elements, c) maximum row sum, d) maximum column sum, e)display upper right
triangle, f)display lower right triangle .
*/

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter elements of the array:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    // a) Sum of main diagonal
    int sumDiagonal = 0;
    for(int i = 0; i < rows && i < cols; i++)
        sumDiagonal += arr[i][i];

    printf("Sum of main diagonal elements: %d\n", sumDiagonal);

    // b) Sum of border elements
    int sumBorder = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == 0 || i == rows-1 || j == 0 || j == cols-1)
                sumBorder += arr[i][j];
        }
    }
    printf("Sum of border elements: %d\n", sumBorder);

    // c) Maximum row sum
    int maxRowSum = 0;
    for(int i = 0; i < rows; i++) {
        int rowSum = 0;
        for(int j = 0; j < cols; j++)
            rowSum += arr[i][j];
        if(rowSum > maxRowSum)
            maxRowSum = rowSum;
        printf("Row%d sum: %d\n", i, rowSum);
    }
    printf("Maximum row sum: %d\n", maxRowSum);

    // d) Maximum column sum
    int maxColSum = 0;
    for(int j = 0; j < cols; j++) {
        int colSum = 0;
        for(int i = 0; i < rows; i++)
            colSum += arr[i][j];
        if(colSum > maxColSum)
            maxColSum = colSum;
        printf("Column%d sum: %d\n", j, colSum);
    }
    printf("Maximum column sum: %d\n", maxColSum);

    // e) Display upper right triangle
    printf("Upper right triangle:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j >= i)
                printf("%d ", arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    // f) Display lower right triangle
    printf("Lower right triangle:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j >= cols - i - 1)
                printf("%d ", arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
