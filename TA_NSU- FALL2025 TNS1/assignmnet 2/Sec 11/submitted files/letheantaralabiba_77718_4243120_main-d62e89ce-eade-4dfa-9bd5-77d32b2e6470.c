#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    int a[r][c];
    printf("Enter elements:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int diag=0, border=0;

    for(int i=0;i<r;i++)
        diag += a[i][i];

    for(int i=0;i<c;i++)
        border += a[0][i] + a[r-1][i];

    for(int i=1;i<r-1;i++)
        border += a[i][0] + a[i][c-1];

    printf("Sum of main diagonal: %d\n", diag);
    printf("Sum of border elements: %d\n", border);

    for(int i=0;i<r;i++) {
        int sum=0;
        for(int j=0;j<c;j++)
            sum+=a[i][j];
        printf("Row %d sum = %d\n", i, sum);
    }

    for(int j=0;j<c;j++) {
        int sum=0;
        for(int i=0;i<r;i++)
            sum+=a[i][j];
        printf("Column %d sum = %d\n", j, sum);
    }

    return 0;
}
