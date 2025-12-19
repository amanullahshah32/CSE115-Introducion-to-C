#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count,ncount=0;
    int ap;
    for(i=0;i<n;i++){
        count=0;
        ap=0;
        for(j=0;j<i;j++){
            if(arr[j]==arr[i]){
                ap=1;
                break;
            }
        }
        if(ap) continue;

    for(j=i+1;j<n;j++){
        if(arr[j]==arr[i]) count++;
    }
     if(count>0) ncount++;

    }
    printf("No. of duplicate elements:%d",ncount);

}


