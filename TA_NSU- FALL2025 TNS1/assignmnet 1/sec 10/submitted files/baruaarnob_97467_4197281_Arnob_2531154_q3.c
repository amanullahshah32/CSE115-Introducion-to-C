#include <stdio.h>
int main()
{int n,k,val;
scanf("%d",&n);
int a[100];
for(int i=0;i<n;i++)scanf("%d",&a[i]);
scanf("%d %d",&k,&val);
for(int i=n;i>k;i--)
    a[i]=a[i-1];
a[k]=val;n++;
for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
    }
