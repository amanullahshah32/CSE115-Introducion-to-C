#include <stdio.h>

int main(){

    int arr[10][10], n;

    int diag = 0, border = 0;

    int maxRow = 0, maxCol = 0;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)

        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    for (int i = 0; i < n; i++){
        int rowSum = 0;
        for (int j = 0; j < n; j++){
            rowSum += arr[i][j];
            if (i == j)
                diag += arr[i][j];

            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                border += arr[i][j];
        }
        if (rowSum > maxRow)

            maxRow = rowSum;

        printf("Row%d sum: %d\n", i, rowSum);
    }

    for (int j = 0; j < n; j++){
        int colSum = 0;
        for (int i = 0; i <n; i++)
            colSum += arr[i][j];

        if (colSum > maxCol)
            maxCol = colSum;
        printf("Column%d sum: %d\n", j, colSum);
    }

    printf("Sum of main diagonal element: %d\n", diag);
    printf("Sum of border element: %d\n", border);
    printf("Maximum row sum: %d\n", maxRow);
    printf("Maximum column sum: %d\n", maxCol);

    printf("Upper right triangle:\n");
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    printf("Lower right triangle:\n");
    for (int i = 0; i < n; i++){
        for (int j = n - i - 1; j <n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
