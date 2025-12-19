#include <stdio.h>
int main()
{
    int n,k,val;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Enter index k and new value: ");
        scanf("%d %d",&k,&val);
    if(k>=0&&k<n)
        a[k]=val;
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
return 0;
}
