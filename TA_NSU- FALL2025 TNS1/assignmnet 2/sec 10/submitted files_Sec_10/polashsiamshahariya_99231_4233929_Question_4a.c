#include<stdio.h>
void rev_arr(int arr1[], int rev_arr1[], int size)
{
    for(int i=0,j=size-1;i<size;i++,j--)
    {
      rev_arr1[j]=arr1[i];
    }
}


int main()
{
    int size;
    printf("Enter size number of array : ");
    scanf("%d",&size);
    int arr1[size];
    int arr2[size];
    printf("Enter elements of array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
    rev_arr(arr1,arr2,size);
    printf("the reverse array:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr2[i]);
    }
}






