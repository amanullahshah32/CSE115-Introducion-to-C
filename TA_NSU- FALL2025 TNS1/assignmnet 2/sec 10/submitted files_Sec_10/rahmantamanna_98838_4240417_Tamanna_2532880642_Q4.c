#include<stdio.h>
void rev_arr(int arr1[], int rev_arr1[], int size);
void rev_arr_ptr(int *arr1, int *rev_arr1, int size);
int main()
{
    int n,i;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int *p,*q;
    p=arr1;
    q=arr2;
    rev_arr(arr1,arr2,n);
    rev_arr_ptr(p,q,n);

    return 0;

}
void rev_arr(int arr1[], int rev_arr1[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
       rev_arr1[i]=arr1[size-i-1];

    }
    printf("Reversed array:\n");
   for(i=0;i<size;i++)
   {
       printf("%d ",rev_arr1[i]);
   } printf("\n");

}
void rev_arr_ptr(int *arr1, int *rev_arr1, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
       *(rev_arr1+i)=*(arr1+(size-i-1));

    }
    printf("Reversed array(pointer):\n");
   for(i=0;i<size;i++)
   {
       printf("%d ",*(rev_arr1+i));
   }
}
