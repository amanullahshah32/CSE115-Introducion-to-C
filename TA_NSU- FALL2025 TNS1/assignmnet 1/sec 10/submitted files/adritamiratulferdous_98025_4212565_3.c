#include<stdio.h>
int main()
{
    int n,k,i, val;
    int arr[n];
    printf("Enter the elements:");
    scanf("%d",&n);

     for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

        printf("Enter index to insert:");
        scanf("%d",&k);

        printf("Enter value=");
        scanf("%d",&val);

        for(i=n;i>k;i--)
        arr[i]=arr[i-1];
        arr[k]=val;
        n++;

     printf("After inserting elements:\n");
     for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
