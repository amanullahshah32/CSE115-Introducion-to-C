#include<stdio.h>
void rev_arr(int arr1[],int rev_arr1[], int size)
{
    int i,j,temp;
    j = size -1;
    for(i=0;i<size;i++)
    {
         temp = arr1[j];
         rev_arr1[i] = temp;
         j--;
    }
}
void rev_arr_ptr(int *arr1, int *rev_arr1, int size)
{
  int i,j,temp;
  j=size -1;
  for(i=0;i<size;i++)
    {
    	 temp = arr1[j];
         rev_arr1[i] = temp;
         j--;
    }
}
int main()
{
  int i,n;
  printf("Enter size of array:");
  scanf("%d",&n);
  int arr[n],rev[n];
  printf("Enter elements:");
  for(i=0;i<n;i++)
   { scanf("%d",&arr[i]);}
  printf("Reversed array:\n");
  rev_arr(arr,rev,n);
  for(i=0;i<n;i++)
  {
  	printf("%d\n",rev[i]);
  }
  rev_arr_ptr(arr,rev,n);
   printf("Reversed array(using pointer):\n");
   for(i=0;i<n;i++)
  {
  	printf("%d\n",rev[i]);
  }
  return 0;
}