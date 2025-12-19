#include <stdio.h>
void shiftArr1Pos(int arr[], int size){
    int x=arr[0];
    for(int i=0; i<size-1; i++)
        arr[i] = arr[i+1];
    arr[size-1] =x;
}
void arr1Rotate(int arr[], int size, int rotFrom){
    for(int i=0;i<rotFrom;i++)
        shiftArr1Pos(arr,size);
}
int main(){
    int n,r;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of rotations: ");
    scanf("%d",&r);

    arr1Rotate(arr,n,r);
    printf("Array after rotation:\n");
    for(int i=0;i<n;i++)
        printf("%d",arr[i]);

    return 0;
}
