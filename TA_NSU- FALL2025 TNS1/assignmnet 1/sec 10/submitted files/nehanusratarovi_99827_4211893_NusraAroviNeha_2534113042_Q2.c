#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d unique elements of the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter index k to delete:");
    scanf("%d",&k);

    if(k<0 || k>=n)
    {
        printf("Invalid index\n");
        return 0;
    }
    for( int i=k;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
   
    printf("Array after deletation:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
     
        return 0;
}