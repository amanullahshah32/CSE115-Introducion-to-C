#include<stdio.h>
int main()
{
    int i,n,j,k;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("Array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("Enter index to modify: ");
    scanf("%d",&k);
    printf("Enter element for the index: ");
    scanf("%d",&j);

    arr[k]=j;
    printf("Array after modification:\n");
    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
