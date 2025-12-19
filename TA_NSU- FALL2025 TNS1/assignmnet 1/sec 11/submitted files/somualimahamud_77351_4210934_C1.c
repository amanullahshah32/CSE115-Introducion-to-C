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
    printf("Enter the index that to be modified and the value to put in that index :");
    scanf("%d%d",&key,&value);
    change_arr(arr,key,value);
    printf("\nafter change the array is : ");
    for(int i =0;i<n;i++)
    {
       printf("%d ",arr[i]);

    }


}
void change_arr(int arr[],int key,int value)
{

    arr[key]=value;


}



