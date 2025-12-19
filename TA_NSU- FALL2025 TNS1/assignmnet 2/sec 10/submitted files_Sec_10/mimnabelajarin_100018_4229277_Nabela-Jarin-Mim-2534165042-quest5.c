#include <stdio.h>

int main() {

    int r,c;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    int arr[r][c];

    // taking input
    printf("Enter elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int diagSum = 0;
    int borderSum = 0;

    // main diagonal
    for(int i=0;i<r;i++){
        diagSum += arr[i][i];
    }

    // border sum
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 || j==0 || i==r-1 || j==c-1){
                borderSum += arr[i][j];
            }
        }
    }

    printf("Sum of main diagonal element: %d\n",diagSum);
    printf("Sum of border element: %d\n",borderSum);

    // row sums
    int maxRow = 0;
    for(int i=0;i<r;i++){
        int s = 0;
        for(int j=0;j<c;j++){
            s += arr[i][j];
        }
        printf("Row%d sum: %d\n", i, s);

        if(s > maxRow) maxRow = s;
    }
    printf("Maximum row sum: %d\n", maxRow);

    // column sums
    int maxCol = 0;
    for(int j=0;j<c;j++){
        int s = 0;
        for(int i=0;i<r;i++){
            s += arr[i][j];
        }
        printf("Column%d sum: %d\n", j, s);

        if(s > maxCol) maxCol = s;
    }
    printf("Maximum column sum: %d\n", maxCol);

    // upper right triangle
    printf("Upper right triangle:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j>=i) printf("%d ",arr[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    // lower right triangle
    printf("Lower right triangle:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j>=r-i-1) printf("%d ",arr[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}
