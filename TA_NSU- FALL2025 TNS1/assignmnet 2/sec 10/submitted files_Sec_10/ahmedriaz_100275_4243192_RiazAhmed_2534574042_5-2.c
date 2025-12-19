#include <stdio.h>

int main() {
    int num;
    printf("Enter matrix size ");
    scanf("%d", &num);

    int a[num][num];
    printf("Enter elements");
    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int diagonalsum = 0;
    for(int i = 0; i < num; i++) {
        diagonalsum += a[i][i];
    }
    printf("Sum of main diagonal element: %d\n", diagonalsum);

    int bordersum = 0;
    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            if(i == 0 || i == num-1 || j == 0 || j == num-1)
                bordersum += a[i][j];
        }
    }
    printf("Sum of border element: %d\n", bordersum);

    int maximumrowsum = 0;
    for(int i = 0; i < num; i++) {
        int rowsum = 0;
        for(int j = 0; j < num; j++) {
            rowsum += a[i][j];
        }
        printf("Row%d sum= %d\n", i, rowsum);
        if(rowsum > maximumrowsum)
            maximumrowsum = rowsum;
    }
    printf("Maximum row sum: %d\n", maximumrowsum);

 
    int maximumcolumnsum = 0;
    for(int j = 0; j < num; j++) {
        int columnsum = 0;
        for(int i = 0; i < num; i++) {
            columnsum += a[i][j];
        }
        printf("Column%d sum: %d\n", j, columnsum);
        if(columnsum > maximumcolumnsum)
            maximumcolumnsum = columnsum;
    }
    printf("Maximum column sum: %d\n", maximumcolumnsum);

    printf("Upper right triangle");
    for(int i = 0; i < num; i++) {
        for(int j = i; j < num; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Lower right triangle");
    for(int i = 0; i < num; i++) {
        for(int j = num - i - 1; j < num; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}