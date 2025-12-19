#include<stdio.h>
void ShiftArr1Pos(int arr1[],int arrSize);
void arr1Rotate(int arr1[],int arrSize,int rotFrom);
int main()
{
    int i,n,n1;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr1[n];
    for(i=0;i<n;i++)
    {
        printf("arr1[%d]=",i);
        scanf("%d",&arr1[i]);
    }
    printf("Number of rotation:");
    scanf("%d",&n1);
    arr1Rotate(arr1,n,n1);
    for(i=0;i<n;i++)
    {
        printf("%d",arr1[i]);
    }
    return 0;
}
void arr1Rotate(int arr1[],int arrSize,int rotFrom)
{
    for(int i=0;i<rotFrom;i++)
    {
        ShiftArr1Pos(arr1,arrSize);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }

}
void shiftarr1pos(int arr1[],int arrSize)
{
    int i,temp=0;
    temp=arr1[0];
    for(i=0;i<arrSize-1;i++)
    {
        arr1[i]=arr1[i+1];
    }
    arr1[arrSize-1]=temp;
}





