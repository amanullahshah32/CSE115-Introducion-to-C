#include<stdio.h>
int main()
{
    int i,k,n,m;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("Enter the number of index :");
    scanf("%d",&k);
    if(k<0||k>n)
    {
        printf("Invalid index");
        return 0;
    }

    printf("Enter new element at index %d:",k);
    scanf("%d",&m);
    for(i=n;i>k;i--)
    {

            a[i]=a[i-1];
    }
    a[k]=m;
    n++;
     printf("New array:");
     for(i=0;i<n;i++)
     {
         printf("%d\n",a[i]);
     }
     return 0;

}


