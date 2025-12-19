#include <stdio.h>
int main()
{
    int n,k,newValue;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter %d unique integers:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter index k to insert at:",n);
    scanf("%d",&k);
    if(k<0||k>n)
    {
        printf("Invalid index!\n");
        return 1;
    }
    printf("Enter new value to insert:");
    scanf("%d",&newValue);
    for(int i=n;i>k;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[k]=newValue;
    printf("Array after insertion:\n",n+1);
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
