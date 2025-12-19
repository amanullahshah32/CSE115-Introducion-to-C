#include <stdio.h>
void RevArr(int arr[],int size);
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original array:");
    {
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    }
    printf("\n");
    RevArr(arr,n);
    printf("Reversed array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
void RevArr(int arr[], int size)
{
    for(int i=0;i<size/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}
