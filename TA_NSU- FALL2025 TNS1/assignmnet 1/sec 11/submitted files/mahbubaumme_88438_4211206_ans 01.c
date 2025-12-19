#include<stdio.h>
int main()
{
    int n,k,newValue;
    printf("Enter array size=");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d unique integer=\n",n);
    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter index to modify=");
    scanf("%d",&k);
    printf("Enter the new value=");
    scanf("%d",&newValue);
    arr[k]=newValue;
    printf("Updated array=");
    for(int i=0; i<n; i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}



