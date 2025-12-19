#include<stdio.h>
int main()
{
    int n,k,x;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d unique elements of the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter index k to modify:");
    scanf("%d",&k);

    if(k<0 || k>=n)
    {
        printf("Invalid index\n");
        return 0;
    }
    printf("Enter the  new value:");
    scanf("%d",&x);

    arr[k]=x;
    printf("Array after modification:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
     
        return 0;
}