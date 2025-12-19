#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements(intput unique elements):");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter index no. to modify:");
    scanf("%d",&k);
    printf("Enter value: ");
    scanf("%d",&j);
    arr[k]=j;
    printf("New array:");
    for(i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }


}


