//Sanzana Afrin Tonny
//2231370042
//section 11

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    int diagonalSum = 0;
    for(int i = 0; i < n; i++) {
        diagonalSum += a[i][i];
    }
    printf("Sum of main diagonal element: %d\n", diagonalSum);

    int borderSum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1) {
                borderSum += a[i][j];
            }
        }
    }
    printf("Sum of border element: %d\n", borderSum);


    int maxRowSum = 0;
    for(int i = 0; i < n; i++) {
        int rowSum = 0;
        for(int j = 0; j < n; j++) {
            rowSum += a[i][j];
        }
        if(rowSum > maxRowSum)
            maxRowSum = rowSum;
    }
    printf("Maximum row sum: %d\n", maxRowSum);


    int maxColSum = 0;
    for(int j = 0; j < n; j++) {
        int colSum = 0;
        for(int i = 0; i < n; i++) {
            colSum += a[i][j];
        }
        if(colSum > maxColSum)
            maxColSum = colSum;
    }
    printf("Maximum column sum: %d\n", maxColSum);


    printf("Upper right triangle:\n");
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    printf("Lower right triangle:\n");
    for(int i = 0; i < n; i++) {
        for(int j = n - i - 1; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

