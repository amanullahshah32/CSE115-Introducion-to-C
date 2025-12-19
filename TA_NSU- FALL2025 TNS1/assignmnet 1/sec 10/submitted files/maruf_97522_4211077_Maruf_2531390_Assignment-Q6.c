#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Unique elements:");
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%d, ",arr[i]);
        }
    }


}
