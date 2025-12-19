#include <stdio.h>
int main()
{
    int n,k,newValue;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d unique integers:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter index k to modify: ",n - 1);
    scanf("%d",&k);
    if(k<0||k>=n)
    {
        printf("Invalid index!\n");
        return 1;
    }
    printf("Enter new value: ");
    scanf("%d",&newValue);
    printf("Old value at index %d:%d\n",k,arr[k]);
    arr[k]=newValue;
    printf("Modified array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
