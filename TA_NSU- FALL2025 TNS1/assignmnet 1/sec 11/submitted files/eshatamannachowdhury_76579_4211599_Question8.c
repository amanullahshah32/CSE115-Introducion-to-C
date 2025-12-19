#include<stdio.h>

void RevArr(int arr[] , int size);

int main()
{
    int arr[50], n , i , j , temp;
    printf("Enter the number of array elements : ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nOriginal array is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
     printf("\nReversed array is : ");
     RevArr(arr,n);
     for(i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
}
void RevArr(int arr[] , int size)
{
    int i , j , temp;
    j = size - 1;
    for(int i =0; i<j;i++,j--)
    {
        temp = arr[i];
        arr[i]=arr[j];
        arr[j] = temp;
    }

}

