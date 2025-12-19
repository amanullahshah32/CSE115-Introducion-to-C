#include<stdio.h>
int main()
{
    int n,i,k,value;
    int arr[100];
    printf("Enter the numbers of elements:");
    scanf("%d",&n);
    printf("Enter %d unique integers:",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter index k to insert:");
    scanf("%d",&k);
    if(k<0||k>n)
    {
        printf("Invalid index!\n");
        return 0;

    }
    printf("Enter value to insert:");
    scanf("d",&value);
    for(i=n;i>k;i--)
        arr[i]=arr[i-1];
        arr[k]=value;
        n++;

    printf("Array after insertion:");
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
    printf("\n");
    return 0;
}
