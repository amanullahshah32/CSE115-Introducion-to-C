#include<stdio.h>
int main()
{
    int n,k,i,value;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++);
    {
        scanf("%d",arr[i]);
    }
    printf("Enter index k to modify:\n ");
    scanf("%d",&k);
    printf("Enter new value:\n");
    scanf("%d",&value);

    if(k>=0&&k<n)
    {
        arr[k]=value;
        printf("Array after modification:\n");
        for(int i=0;i<n;i++);
        {
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid index:\n");
    }
    return 0;
}
