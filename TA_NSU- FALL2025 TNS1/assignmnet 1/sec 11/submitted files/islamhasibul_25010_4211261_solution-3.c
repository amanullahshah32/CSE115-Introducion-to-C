#include<stdio.h>
int main(){
    int n,k,v,i;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d%d",&k,&v);
    if(k>=0 && k<=n){
        for(i=n;i>k;i--) a[i]=a[i-1];
        a[k]=v;
        n++;
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
}