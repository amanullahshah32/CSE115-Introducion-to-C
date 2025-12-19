#include<stdio.h>
int main()
{
    int n,i,k,r=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter index no. you want to edit:");
    scanf("%d",&k);
    if(k<0||k>n)
       {
           printf("Invalid index");
        return 0;
       }
    else
    printf("Enter new element:");
    scanf("%d",&r);
    a[k]=r;
    printf("Final result:\n");
    for(i=0;i<n;i++)
     printf("%d\n",a[i]);
     return 0;
}
