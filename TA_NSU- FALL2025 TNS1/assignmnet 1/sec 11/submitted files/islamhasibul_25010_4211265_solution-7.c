#include<stdio.h>
int main(){
    int n,i,j,d=0;
    scanf("%d",&n);
    int a[n],v[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        v[i]=0;
    }
    for(i=0;i<n;i++){
        if(!v[i]){
            int f=1;
            for(j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    f++;
                    v[j]=1;
                }
            }
            if(f>1) d++;
        }
    }
    printf("Total number of duplicate element found in array: %d",d);
}