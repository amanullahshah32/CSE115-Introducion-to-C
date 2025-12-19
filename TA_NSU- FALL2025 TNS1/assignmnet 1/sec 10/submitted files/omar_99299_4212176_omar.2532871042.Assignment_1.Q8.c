#include <stdio.h>

void RevArr(int arr[],int size);
int main()
{
    int arr[100],n,i;
     printf("Enter the size of array: ");
     scanf("%d",&n);
     printf("Enter %d unique integers:\n",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     printf("The original integers:\n");
     for(i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
     RevArr(arr,n);
     printf("The reverse integers:\n");
     for(i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
}

void RevArr(int arr[],int size)
{
    int start=0,end=size-1,temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
