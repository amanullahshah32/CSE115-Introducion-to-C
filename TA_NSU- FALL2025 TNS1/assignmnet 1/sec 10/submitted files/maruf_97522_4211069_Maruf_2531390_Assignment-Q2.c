#include<stdio.h>
int main(){
    int i,k,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements(intput unique elements):");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter index no. to delete:");
    scanf("%d",&k);
    for(i=k;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("Array after deleting the element:");
    for(i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
}

