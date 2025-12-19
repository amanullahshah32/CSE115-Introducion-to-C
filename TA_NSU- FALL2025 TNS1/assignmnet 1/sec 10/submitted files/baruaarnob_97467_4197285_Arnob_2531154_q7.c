#include <stdio.h>
int main()
{int n;
scanf("%d",&n);
int a[n],dup=0;
for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
if(a[i]==a[j])
{dup++;break;}
printf("Total duplicate=%d",dup);
return 0;
}
