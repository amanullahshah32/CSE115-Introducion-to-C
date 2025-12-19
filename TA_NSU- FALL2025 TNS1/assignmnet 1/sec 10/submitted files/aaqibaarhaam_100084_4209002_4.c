#include <stdio.h>
int main()
{
    int X[100],n,i,another;
    printf("Enter amount of elements you want to populate, n: ");
    scanf("%d",&n);
    printf("Enter the elements in your array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&X[i]);
    printf("Current array after inputting %d elements: ",n);
    for(i=0;i<n;i++)
        printf("%d ",X[i]);
    printf("\nEnter another element: ");
    scanf("%d",&X[n]);
    printf("New array: ");
    for(i=0;i<=n;i++)
        printf("%d ",X[i]);
    return 0;
}
