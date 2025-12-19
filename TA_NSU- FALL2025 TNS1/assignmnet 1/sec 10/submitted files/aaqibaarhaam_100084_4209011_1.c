#include <stdio.h>
int main()
{
    printf("Enter no. of elements in your array: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in your array:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Array is : ");for(int i=0;i<n;i++)printf("%d ",arr[i]);

    printf("\nEnter the index number you want to modify: ");
    int k;
    scanf("%d",&k);
    printf("Enter the new number unique from others: ");
    int k2;
    scanf("%d",&k2);
    arr[k]=k2;
    printf("New array is: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
