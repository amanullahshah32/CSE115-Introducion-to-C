#include<stdio.h>
void RevArr(int arr[],int size){
    for(int i=0,j=size-1;i<=j;i++,j--){
       int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("After reverse the array is :\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }


}
int main(){
    int size;
    printf("Enter array size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    RevArr(arr,size);

    return 0;
}