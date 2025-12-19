#include <stdio.h>

void shiftArr1Pos(int arr1[],int arrSize);
void arr1Rotate(int arr1[],int arrSize,int rotFrom);

int main()
{
    int arr[100],n,i,rotFrom;

     printf("Enter the size of array: ");
     scanf("%d",&n);
     printf("Enter %d unique integers:\n",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     printf("Enter index to rotate from: ");
    scanf("%d",&rotFrom);
    printf("From index %d Position, array elements are: ",rotFrom);
    for(i=rotFrom;i<n;i++) {
        printf("%d ",arr[i]);
    }
     printf("\n");
    printf("Array elements prior to index %d: ",rotFrom);
    for(i=0;i<rotFrom;i++) {
        printf("%d ",arr[i]);
    }
     printf("\n");

    arr1Rotate(arr, n, rotFrom);

     printf("After rotating from index %d, the array is: ",rotFrom);
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void shiftArr1Pos(int arr1[],int arrSize)
{
    int firstElement=arr1[0],i;

    for(i=0;i<arrSize-1;i++) {
        arr1[i]=arr1[i+1];
    }
     arr1[arrSize-1]=firstElement;
}

void arr1Rotate(int arr1[],int arrSize,int rotFrom)
{
    int i;

    for(i=0;i<rotFrom;i++) {
        shiftArr1Pos(arr1, arrSize);
    }
}
