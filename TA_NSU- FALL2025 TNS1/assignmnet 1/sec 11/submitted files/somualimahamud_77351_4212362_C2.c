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
    printf("Enter the index that to be deleted :");
    scanf("%d",&key);
    change_arr(arr,key,&n);
    printf("\nafter change the array is : ");
    for(int i =0;i<n;i++)
    {
       printf("%d ",arr[i]);

    }


}
void change_arr(int arr[],int key,int* n)
{

  for(int i=key;i<*n;i++)
  {
     arr[i]=arr[i+1];

  }
 (*n)--;
}



