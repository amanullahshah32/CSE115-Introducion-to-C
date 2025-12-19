#include<stdio.h>
 void shiftArr1Pos (int arr1[],int arrSize);
 void arr1Rotate (int arr1[],int arrSize,int rotFrom);
int main()
{
     int i,n,k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
        printf("Enter index no. to rotate:");
        scanf("%d",&k);
        arr1Rotate(a,n,k);
        return 0;
}
void shiftArr1Pos (int arr1[],int arrSize)
{
    int i;
    int temp=arr1[0];
    for(i=0;i<arrSize-1;i++)
    {
        arr1[i]=arr1[i+1];

    }
    arr1[arrSize-1]=temp;

}
void arr1Rotate (int arr1[],int arrSize,int rotFrom)
{
    int i;

    for(i=0;i<rotFrom;i++)
    {
       shiftArr1Pos(arr1,arrSize);
    }
    printf("Rotated Array:\n");
    for(i = 0; i <arrSize; i++)
        printf("%d ", arr1[i]);
}

