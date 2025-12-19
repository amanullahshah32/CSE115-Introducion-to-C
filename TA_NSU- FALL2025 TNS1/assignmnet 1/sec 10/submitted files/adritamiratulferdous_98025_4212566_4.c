#include<stdio.h>
int main()
{
    int X[100];
    int n,k,i;

    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&X[i]);

    printf("Enter the new value: ");
    scanf("%d",&k);

    X[i]=k;

    printf("Updated Array:\n");
    for(i=0;i<=n;i++)
        printf("%d ",X[i]);

    return 0;
}
