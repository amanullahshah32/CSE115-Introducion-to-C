#include<stdio.h>
void RevArr(int arr[],int size)
{
    for(int i=0,j=size-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    RevArr(arr,size);

     printf("The reverse of the array:\n");

     for(int i=0;i<size;i++)
    {
      printf("%d\n",arr[i]);
    }

    return 0;
   
}