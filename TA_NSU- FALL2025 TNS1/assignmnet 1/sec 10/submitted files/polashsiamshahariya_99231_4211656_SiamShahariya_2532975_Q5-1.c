#include<stdio.h>
int main(){
    int size;
    float average=0.0;
    printf("Enter Array Size : ");
    scanf("%d",&size);
    float arr[size];
    printf("Enter elements :\n");
    for(int i=0;i<size;i++){
        scanf("%f",&arr[i]);
    }
    for(int i=0;i<size;i++){
        average+=arr[i];
    }
    average=average/size;
    printf("Average = %f, ",average);
    printf("The elements greater then average are : ");
for(int i=0;i<size;i++){
    if(average<arr[i]){
        printf("%.0f, ",arr[i]);
    }
}
    return 0;
}