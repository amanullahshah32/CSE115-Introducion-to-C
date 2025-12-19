#include<stdio.h>
int main(){
    int i,j,n,k;
    int X[100];
    printf("Enter no of elements to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&X[i]);
    }
    printf("Enter new element to add/insert:");
    scanf("%d",&k);
    X[n]=k;
    n++;
    printf("New array after insertion:");
    for(i=0;i<n;i++){
        printf("%d, ",X[i]);
    }



}
