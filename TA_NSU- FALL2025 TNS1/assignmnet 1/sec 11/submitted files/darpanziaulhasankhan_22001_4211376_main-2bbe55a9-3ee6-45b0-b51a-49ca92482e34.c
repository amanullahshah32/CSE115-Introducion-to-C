#include <stdio.h>

void shiftArr1Pos(int arr[], int size){
    int temp = arr[0];
    for(int i=0;i<size-1;i++)
        arr[i] = arr[i+1];
    arr[size-1] = temp;
}

void arr1Rotate(int arr[], int size, int rotFrom){
    for(int i=0;i<rotFrom;i++)
        shiftArr1Pos(arr,size);
}

int main(){
    int n, r;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    scanf("%d",&r);

    arr1Rotate(arr,n,r);

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
