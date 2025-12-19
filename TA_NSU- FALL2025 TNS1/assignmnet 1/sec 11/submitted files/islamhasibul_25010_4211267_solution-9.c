#include<stdio.h>
void shiftArr1Pos(int a[],int n){
    int i,t=a[0];
    for(i=0;i<n-1;i++) a[i]=a[i+1];
    a[n-1]=t;
}
void arr1Rotate(int a[],int n,int r){
    int i;
    for(i=0;i<r;i++) shiftArr1Pos(a,n);
}
int main(){
    int n,i,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    printf("From index %d Position, array elements are: ",k);
    for(i=k;i<n;i++) printf("%d ",a[i]);
    printf("\nArray elements prior to index %d: ",k);
    for(i=0;i<k;i++) printf("%d ",a[i]);
    arr1Rotate(a,n,k);
    printf("\nAfter rotating from index %d, the array is: ",k);
    for(i=0;i<n;i++) printf("%d ",a[i]);
}