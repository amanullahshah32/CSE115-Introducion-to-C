#include<stdio.h>
void rev_arr(int *arr1, int *rev_arr1, int size)
{

    for(int i=0,j=size-1; i<size; i++,j--)
    {
        *(rev_arr1+i)=*(arr1+j);
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
    int *ptr=arr;
    int *qtr=brr;
    for(int i=0; i<n; i++)
    {
        scanf("%d",(ptr+i));
    }

    rev_arr(ptr,qtr,n);
    printf("\nReversed array:");
    for(int i=0; i<n; i++)
    {
        printf("%d, ",*(qtr+i));
    }
}
