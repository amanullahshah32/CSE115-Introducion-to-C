#include<stdio.h>
int main()
{
    int n,i,k;
    int arr[100];
    printf("Enter the numbers of elements:");
    scanf("%d",&n);
    printf("Enter %d unique integers:",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter index k to delete:");
    scanf("%d",&k);
    if(k<0||k>=n)
    {
        printf("Invalid index!\n");
        return 0;

    }
    for(i=k;i<n-1;i++)
        arr[i]=arr[i+1];
        n=n-1;

    printf("Array after deletion:");
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
    printf("\n");
    return 0;
}
