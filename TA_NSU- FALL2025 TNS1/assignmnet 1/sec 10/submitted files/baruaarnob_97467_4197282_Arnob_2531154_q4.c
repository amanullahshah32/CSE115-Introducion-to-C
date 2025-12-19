#include <stdio.h>
int main()
{
    int n,x;
    int X[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
    scanf("%d",&X[i]);
scanf("%d",&x);X[n]=x;n++;
for(int i=0;i<n;i++)
    printf("%d ",X[i]);
    return 0;
}
