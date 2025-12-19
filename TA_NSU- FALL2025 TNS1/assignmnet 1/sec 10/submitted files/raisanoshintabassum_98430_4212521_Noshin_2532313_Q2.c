#include<stdio.h>
int main()
{
    int n,i,k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter index no. you want to delete:");
    scanf("%d",&k);
    for(i=k;i<n-1;i++)
    {
        a[i]=a[i+1];
        n--;
    }
    printf("Final Result:");
    for(i=0;i<n;i++)
 printf("\n%d",a[i]);
    return 0;
}
