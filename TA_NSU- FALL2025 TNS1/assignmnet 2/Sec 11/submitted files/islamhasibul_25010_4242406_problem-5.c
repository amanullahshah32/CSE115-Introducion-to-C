#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    int diag=0;
    for(int i=0;i<n;i++) diag+=a[i][i];
    printf("Sum of main diagonal element: %d\n",diag);

    int border=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==0||i==n-1||j==0||j==n-1)
                border+=a[i][j];
    printf("Sum of border element: %d\n",border);

    int maxRow=0,maxCol=0;
    for(int i=0;i<n;i++){
        int rsum=0,csum=0;
        for(int j=0;j<n;j++){
            rsum+=a[i][j];
            csum+=a[j][i];
        }
        if(rsum>maxRow) maxRow=rsum;
        if(csum>maxCol) maxCol=csum;
    }
    printf("Maximum row sum: %d\n",maxRow);
    printf("Maximum column sum: %d\n",maxCol);

    printf("Upper right triangle:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i) printf("%d ",a[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    printf("Lower right triangle:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=n-1-i) printf("%d ",a[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}