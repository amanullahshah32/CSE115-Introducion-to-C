#include<stdio.h>
void rev_arr(int arr1[], int rev_arr1[], int size)
{
    int i,j;
    for(i=0,j=size-1; i<size; i++,j--)
    {
        rev_arr1[i]=arr1[j];
    }
    printf("\nReversed array:");
    for(i=0; i<size; i++)
    {
        printf("%d, ",rev_arr1[i]);
    }


}
int main()
{
    int n;
    printf("Enter no. of elemnets:");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    printf("Enter elements:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    rev_arr(arr,brr,n);
}
