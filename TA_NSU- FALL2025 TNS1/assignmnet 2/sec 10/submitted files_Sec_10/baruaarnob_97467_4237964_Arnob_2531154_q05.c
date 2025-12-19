#include<stdio.h>

int main(){
    int a[10][10];
    int n, i, j;
    int diagSum = 0, borderSum = 0;
    int rowSum, colSum;
    int maxRowSum = 0, maxColSum = 0;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        diagSum = diagSum + a[i][i];
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
                borderSum = borderSum + a[i][j];
            }
        }
    }


    for(i = 0; i < n; i++){
        rowSum = 0;
        for(j = 0; j < n; j++){
            rowSum = rowSum + a[i][j];
        }
        if(i == 0 || rowSum > maxRowSum){
            maxRowSum = rowSum;
        }
    }


    for(j = 0; j < n; j++){
        colSum = 0;
        for(i = 0; i < n; i++){
            colSum = colSum + a[i][j];
        }
        if(j == 0 || colSum > maxColSum){
            maxColSum = colSum;
        }
    }

    printf("Sum of main diagonal = %d\n", diagSum);
    printf("Sum of border elements = %d\n", borderSum);
    printf("Maximum row sum = %d\n", maxRowSum);
    printf("Maximum column sum = %d\n", maxColSum);

    // upper right triangle
    printf("Upper right triangle:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j >= i){
                printf("%d ", a[i][j]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }


    printf("Lower right triangle:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j >= n - i - 1){
                printf("%d ", a[i][j]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
