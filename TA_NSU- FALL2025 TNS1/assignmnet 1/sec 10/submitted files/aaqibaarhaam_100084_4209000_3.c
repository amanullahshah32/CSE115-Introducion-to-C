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
    printf("Array is : ");for(int i=0;i<n;i++)printf("%d ",arr[i]);// i=0=10 i=2=20 i=3=30 i=4=40 i=5=50

    printf("\nEnter the index number where you want to insert element: ");//k=1
    int k;
    scanf("%d",&k);
    printf("Enter new value: ");int k2; scanf("%d",&k2);
    n++;
    for(int i=n;i>=k;i--)//i=5,4,3,2,1
        arr[i+1]=arr[i];
    arr[k]=k2;
    printf("New array is: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}

