#include<stdio.h>
float calavg(float arr[],int size){
    int i;
    float sum=0,avg;
    for(i=0;i<size;i++){
        sum=sum+arr[i];
    }
    avg=sum/size;
   return avg;
}

int main(){
    int i,j,n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    float arr[n];
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    float p=calavg(arr,n);
    printf("Average:%.3f",p);
    int count=0;
    printf("\nElements greater than average:");
    for(i=0;i<n;i++){
        if(arr[i]>p){
            count++;
            printf("%.3f, ",arr[i]);
        }
    }
    printf("\nNo. of elements greater than average:%d",count);
}
