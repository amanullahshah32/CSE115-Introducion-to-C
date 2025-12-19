#include<stdio.h>
int main()
{
    int i,j,k,n;
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
    printf("Index of Element to insert: ");
    scanf("%d",&j);
    printf("Element to insert: ");
    scanf("%d",&k);


    for(i=n; i>j; i--)
    {
        arr[i]=arr[i-1];
    }
    n++;
    arr[j]=k;

    printf("Array after inserting the element: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
