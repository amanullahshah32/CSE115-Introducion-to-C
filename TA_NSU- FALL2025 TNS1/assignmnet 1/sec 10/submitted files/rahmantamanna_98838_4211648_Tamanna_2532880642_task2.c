#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    printf("\n");

    for(i=0; i<n; i++)
    {
        printf("array[%d]=",i);
        scanf("%d", &arr[i]);
    }
    printf("Element to delete: ");
    scanf("%d",&j);

    for(i=j; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("Array after deleting the element: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
