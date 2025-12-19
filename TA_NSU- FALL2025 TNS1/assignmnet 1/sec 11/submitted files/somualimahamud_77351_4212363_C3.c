#include<stdio.h>
int main()
{
    int n,key,value;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Please enter elements for array and all will be unique number: ");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("Enter the index and the value that will be inserted on the index :");
    scanf("%d %d",&key,&value);
    change_arr(arr,key,&n,value);
    printf("\nafter change the array is : ");
    for(int i =0;i<n;i++)
    {
       printf("%d ",arr[i]);

    }


}
void change_arr(int arr[],int key,int* n,int value)
{

  for(int i=*n;i>key;i--)
  {

     arr[i]=arr[i-1];

  }
  arr[key]=value;
 (*n)++;
}



