#include <stdio.h>
void shiftArr1Pos(int a[],int n){
int t=a[0];for(int i=0;i<n-1;i++)a[i]=a[i+1];a[n-1]=t;}
void arr1Rotate(int a[],int n,int r){
for(int i=0;i<r;i++)shiftArr1Pos(a,n);}
int main(){int n,r;scanf("%d",&n);int a[n];
for(int i=0;i<n;i++)scanf("%d",&a[i]);
scanf("%d",&r);arr1Rotate(a,n,r);
for(int i=0;i<n;i++)printf("%d ",a[i]);}
