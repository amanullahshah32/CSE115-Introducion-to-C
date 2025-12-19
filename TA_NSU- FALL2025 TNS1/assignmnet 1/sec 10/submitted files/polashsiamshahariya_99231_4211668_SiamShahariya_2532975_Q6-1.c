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
    printf("Unique elements (occur only once):\n");
    int count;
    for(int i=0;i<size;i++){
        count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count==1) printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}