#include<stdio.h>
void rev_arr(int arr1[], int rev_arr1[], int size);
void rev_arr_ptr(int *arr1, int *rev_arr1, int size);
int main()
{
  int i,n;
  printf("Enter size of array:");
  scanf("%d",&n);
  int a[n],b[n];
  printf("Enter elements:");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  rev_arr(a,b,n);
  rev_arr_ptr(a,b,n);
  return 0;
}
void rev_arr(int arr1[],int rev_arr1[], int size)
{
    int i,j;
    printf("Revesed array:\n");
    for(i=0;i<size;i++)
    {
            rev_arr1[i]=arr1[size-1-i];
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",rev_arr1[i]);
    }
}
void rev_arr_ptr(int *arr1, int *rev_arr1, int size)
{
  int i;
  printf("Revesed array(pointer):\n");
  for(i=0;i<size;i++)
    {
      *(rev_arr1+i)=*(arr1+(size-1-i));
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",*(rev_arr1+i));
    }

}
