#include <stdio.h>
int main()
{
    printf("Enter no. of elements in your array: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter unique integers:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Array is : ");for(int i=0;i<n;i++)printf("%d ",arr[i]);// i=0=10 i=1=20 i=2=30 i=3=40 i=4=50

    printf("\nEnter the index number you want to delete: ");//k=1
    int k;
    scanf("%d",&k);
    for(int i=k;i<n;i++)//i=1,2,3,4
        arr[i]=arr[i+1];//20=30, 30=40, 40=50--10 30 40 50 50
    n--;                                     //10 30 40 50
    printf("New array is: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
