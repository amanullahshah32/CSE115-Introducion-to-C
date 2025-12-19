//answer 5
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    int diag = 0, border = 0;


    for(int i=0; i<n; i++)
        diag += a[i][i];


    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==0 || i==n-1 || j==0 || j==n-1)
                border += a[i][j];
        }
    }

    printf("Sum of main diagonal: %d\n", diag);
    printf("Sum of border elements: %d\n", border);

    int maxRow = -99999, maxCol = -99999;


    for(int i=0; i<n; i++) {
        int sum = 0;
        for(int j=0; j<n; j++) sum += a[i][j];
        printf("Row%d sum: %d\n", i, sum);
        if(sum > maxRow) maxRow = sum;
    }

    printf("Maximum row sum: %d\n", maxRow);


    for(int j=0; j<n; j++) {
        int sum = 0;
        for(int i=0; i<n; i++) sum += a[i][j];
        printf("Column%d sum: %d\n", j, sum);
        if(sum > maxCol) maxCol = sum;
    }

    printf("Maximum column sum: %d\n", maxCol);


    printf("Upper right triangle:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(j >= i) printf("%d ", a[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    printf("Lower right triangle:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(j >= i) printf("%d ", a[j][i]);
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}
