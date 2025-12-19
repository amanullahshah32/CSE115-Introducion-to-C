#include<stdio.h>
int main()
{
    int newValue,k,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter index k=");
    scanf("%d",&k);

    printf("The new value is ",newValue);
    scanf("%d",&newValue);

    if(k>=0 && k<n)
    {
        arr[k]=newValue;

    }
    else
        printf("Invalid Array");


    printf("Updated array: ");

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);


    return 0;
}
