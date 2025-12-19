#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int diag=0, border=0;

    for(int i=0;i<r;i++)
        diag += a[i][i];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(i==0 || j==0 || i==r-1 || j==c-1)
                border += a[i][j];

    printf("Sum of main diagonal element: %d\n", diag);
    printf("Sum of border element: %d\n", border);

    int maxRow=0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++) sum+=a[i][j];
        printf("Row%d sum: %d\n", i, sum);
        if(sum > maxRow) maxRow = sum;
    }
    printf("Maximum row sum: %d\n", maxRow);

    int maxCol=0;
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++) sum+=a[i][j];
        printf("Column%d sum: %d\n", j, sum);
        if(sum > maxCol) maxCol = sum;
    }
    printf("Maximum column sum: %d\n", maxCol);

    printf("Upper right triangle:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            if(j>=i) printf("%d ", a[i][j]);
            else printf("  ");
        printf("\n");
    }

    printf("Lower right triangle:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            if(j>=r-i-1) printf("%d ", a[i][j]);
            else printf("  ");
        printf("\n");
    }

    return 0;
}
