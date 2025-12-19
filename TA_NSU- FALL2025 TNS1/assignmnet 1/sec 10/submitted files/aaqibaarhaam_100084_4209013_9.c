#include <stdio.h>
void shiftArr1Pos (int arr1[],int size)
{
    int temp=arr1[0];//store first element-LEFT SHIFT
    for(int i=0;i<size-1;i++)
        arr1[i]=arr1[i+1];//shifts left
    arr1[size-1]=temp;//puts first element at the last
}
void arr1Rotate (int arr1[],int arrSize, int rotFrom)
{
    printf("\nFrom index %d Position, array elements are: ",rotFrom);
    for(int i=rotFrom; i<arrSize; i++)
        printf("%d ",arr1[i]);

    printf("\nArray elements prior to index: ");
    for(int i=0; i<rotFrom; i++)
        printf("%d ",arr1[i]);

    for(int i=0; i<rotFrom; i++)
        shiftArr1Pos(arr1,arrSize);//with for loop we decide how many times this happens

    printf("\nAfter rotating from index %d, the array is: ",rotFrom);
    for(int i=0;i<arrSize;i++)
        printf("%d ",arr1[i]);
    printf("\n\n");
}
int main()
{
    printf("Enter array size: "); int size; scanf("%d",&size);
    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size; i++)
        scanf("%d",&arr[i]);
    printf("\nArray elements: ");
    for(int i=0;i<size; i++)
        printf("%d ",arr[i]);
    printf("\nRotate from index: "); int N; scanf("%d",&N);
    arr1Rotate(arr,size,N);
    return 0;
}
