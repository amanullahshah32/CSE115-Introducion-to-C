#include<stdio.h>
int main(){
    int n,k,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    if(k>=0 && k<n){
        for(i=k;i<n-1;i++) a[i]=a[i+1];
        n--;
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
}