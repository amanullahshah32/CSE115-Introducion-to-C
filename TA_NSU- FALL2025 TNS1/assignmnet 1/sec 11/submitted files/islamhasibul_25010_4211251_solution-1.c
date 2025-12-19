#include<stdio.h>
int main(){
    int n,k,v,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d%d",&k,&v);
    if(k>=0 && k<n) a[k]=v;
    for(i=0;i<n;i++) printf("%d ",a[i]);
}