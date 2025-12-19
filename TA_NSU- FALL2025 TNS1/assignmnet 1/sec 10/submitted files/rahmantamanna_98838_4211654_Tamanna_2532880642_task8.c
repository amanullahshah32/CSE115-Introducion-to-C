#include<stdio.h>
void RevArr(int arr[],int size);
int main()
{
    int n,i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr1[n];
    for(i=0;i<n;i++)
    {
        printf("array[%d]= ",i);
        scanf("%d",&arr1[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");

    RevArr(arr1,n);

    return 0;

}
void RevArr(int arr[],int size)
{
    int temp=0,i;
    for(i=0;i<(size/2);i++)
    {
      temp= arr[i];
      arr[i]=arr[size-i-1];
      arr[size-i-1]=temp;
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

}
