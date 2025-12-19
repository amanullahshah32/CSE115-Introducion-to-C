#include<stdio.h>
int main(){
    int X[100],n,i,e;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&X[i]);
    scanf("%d",&e);
    X[n]=e;
    for(i=0;i<=n;i++) printf("%d ",X[i]);
}