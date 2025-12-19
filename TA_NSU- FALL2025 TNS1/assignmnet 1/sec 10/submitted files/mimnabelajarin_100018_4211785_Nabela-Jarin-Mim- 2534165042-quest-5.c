#include <stdio.h>
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    float arr[n],sum=0;
    printf("Enter elements:\n ");
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
        sum=sum+arr[i];}
        float avg= sum/n;
        printf("Average =%f,The elements greater than average are: ", avg);
    for(int i=0;i<n;i++){
        if(arr[i]>avg){
            printf("%g, ", arr[i]);}
    }

    return 0;
}
