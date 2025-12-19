#include<stdio.h>
int main(){
    int arr[6]={4,9,0,8,6,3}, k;
    printf("The current elements in the array is : \n");
    for(int j=0; j<6; j++){
        printf("%d\n", arr[j]);
    }
    printf("Enter the index you want to delete (k) (0-5) : ");
    scanf("%d", &k);
    for(int i=k; i<6-1; ++i){
        arr[i]=arr[i+1];
    }
    printf("The value right now : \n");
    for(int t=0; t<k; t++){
        printf("%d\n", arr[t]);
    }
    return 0;
}