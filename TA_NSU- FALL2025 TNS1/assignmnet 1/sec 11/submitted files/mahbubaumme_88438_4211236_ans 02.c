#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter the array size=");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the unique integer=\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter index to delete=");
    scanf("%d",&k);
    for(int i=k; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("Array after deletion=");
    for(int i=0; i<n; i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}
