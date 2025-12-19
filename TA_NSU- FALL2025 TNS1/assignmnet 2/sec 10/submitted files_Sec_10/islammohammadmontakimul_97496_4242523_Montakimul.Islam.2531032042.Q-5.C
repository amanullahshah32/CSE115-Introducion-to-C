#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    int arr[n][m];

    // Input
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);

    // a) Sum of main diagonal
    int diagSum = 0;
    for (int i = 0; i < n && i < m; i++)
        diagSum += arr[i][i];
    printf("Sum of main diagonal: %d\n", diagSum);

    // b) Sum of border elements
    int borderSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
                borderSum += arr[i][j];
        }
    }
    printf("Sum of border elements: %d\n", borderSum);

    // c) Maximum row sum
    int maxRowSum = 0;
    for (int i = 0; i < n; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < m; j++)
            rowSum += arr[i][j];
        if (rowSum > maxRowSum) maxRowSum = rowSum;
    }
    printf("Maximum row sum: %d\n", maxRowSum);

    // d) Maximum column sum
    int maxColSum = 0;
    for (int j = 0; j < m; j++)
    {
        int colSum = 0;
        for (int i = 0; i < n; i++)
            colSum += arr[i][j];
        if (colSum > maxColSum) maxColSum = colSum;
    }
    printf("Maximum column sum: %d\n", maxColSum);

    // e) Upper right triangle
    printf("Upper right triangle:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j >= i) printf("%d ", arr[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    // f) Lower right triangle
    printf("Lower right triangle:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j >= m - i - 1) printf("%d ", arr[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}
