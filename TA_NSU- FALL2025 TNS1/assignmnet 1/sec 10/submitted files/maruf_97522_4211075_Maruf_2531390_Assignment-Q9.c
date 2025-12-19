#include <stdio.h>
void shiftArr1Pos(int arr1[],int arrSize){
    int first=arr1[0];
    for(int i=0;i<arrSize-1;i++){
     arr1[i]=arr1[i+1];
    }
    arr1[arrSize-1]=first;
}

void arr1Rotate(int arr1[],int arrSize,int rotFrom)
{
    for(int i=0;i<rotFrom;i++){
        shiftArr1Pos(arr1,arrSize);
    }
}

int main() {
    int n,i,rot;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter index number to rotate:");
    scanf("%d",&rot);
    rot=rot%n;
    printf("From index %d array elements are:",rot);
    for(i=rot;i<n;i++){
        printf("%d, ",arr[i]);
    }
    printf("\nArray elements prior to index %d:",rot);
    for(i=0;i<rot;i++){
        printf("%d, ",arr[i]);
    }
    arr1Rotate(arr,n,rot);
    printf("\nArray after rotating %d positions:",rot);
    for(i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
}

