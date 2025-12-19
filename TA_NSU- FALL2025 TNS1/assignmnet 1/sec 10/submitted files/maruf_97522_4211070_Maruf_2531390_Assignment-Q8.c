#include<stdio.h>
void RevArr(int arr[],int size){
    int i,j;
    for(i=0,j=size-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("\nReversed array:");
    for(i=0;i<size;i++){
        printf("%d, ",arr[i]);
    }
}

int main(){
    int i,n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    RevArr(arr,n);
}




