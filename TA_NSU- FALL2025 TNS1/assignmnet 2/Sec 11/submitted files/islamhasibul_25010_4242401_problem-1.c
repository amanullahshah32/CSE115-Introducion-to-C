#include<stdio.h>

int max(int *p, int size){
    int m = *p;
    for(int i=1;i<size;i++){
        if(*(p+i) > m)
            m = *(p+i);
    }
    return m;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("%d",max(a,n));
    return 0;
}