#include<stdio.h>
int main(){
    int size;
    printf("Enter Array Size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Total number of duplicate element found in array: ");
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
   printf("%d",count);
    return 0;
}