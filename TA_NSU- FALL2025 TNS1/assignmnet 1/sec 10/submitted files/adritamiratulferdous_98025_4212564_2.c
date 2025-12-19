#include<stdio.h>
int main()
{
    int n,k;
    int arr[n];
    printf("Enter the elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Element to delete from index k= ");
    scanf("%d",&k);

    if(k>=0 && k<n)
    {
        for(int i=k;i<n-1;i++)
            arr[i]=arr[i+1];
        n--;

        printf("Array after deletion:\n");
        for(int i=0;i<n;i++)
            printf("%d ",arr[i]);

    }
    else
        printf("Invalid index");

    return 0;
}
