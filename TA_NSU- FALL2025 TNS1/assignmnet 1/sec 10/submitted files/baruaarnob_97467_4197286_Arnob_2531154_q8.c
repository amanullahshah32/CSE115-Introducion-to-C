#include <stdio.h>
void RevArr(int arr[], int size)
{
for(int i=0,j=size-1;i<j;i++,j--)
    {
int t=arr[i];arr[i]=arr[j];arr[j]=t;
}
}
int main()
{int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
RevArr(a,n);
for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
