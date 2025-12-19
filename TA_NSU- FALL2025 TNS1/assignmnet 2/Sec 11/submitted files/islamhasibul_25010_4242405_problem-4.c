#include<stdio.h>

void rev_arr(int arr1[], int rev_arr1[], int size){
    for(int i=0;i<size;i++)
        rev_arr1[i] = arr1[size-1-i];
}

void rev_arr2(int *arr1, int *rev_arr1, int size){
    for(int i=0;i<size;i++)
        *(rev_arr1+i) = *(arr1+size-1-i);
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    
    rev_arr2(a,b,n);
    
    for(int i=0;i<n;i++) printf("%d ",b[i]);
    return 0;
}