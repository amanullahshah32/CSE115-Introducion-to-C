#include<stdio.h>
void RevArr(int a[],int n){
    int i,j,t;
    for(i=0,j=n-1;i<j;i++,j--){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    RevArr(a,n);
    for(i=0;i<n;i++) printf("%d ",a[i]);
}