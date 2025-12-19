#include <stdio.h>
void RevArr ( int arr[], int size)
{
    for(int i=0,j=size-1; i<=(size-1)/2; i++,j--)//j=size-1 is our where our array's last element is, at size it is beyond our array and garbage values
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main()
{
    printf("Enter the size of your array: "); int n; scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nArray before: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    RevArr(arr,n);
    printf("\nArray after: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
