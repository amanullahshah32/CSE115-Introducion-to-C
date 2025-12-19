#include<stdio.h>
int main(){
    int arr[10] = {4, 9,0,6,5,4,6,77,44,66}, n;
    printf("Enter the position you want to modify(0-9) : ");
    scanf("%d", &n);
    printf("Current value of array : \n");
    for(int i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }
    printf("Enter the modified value : ");
    scanf("%d", &arr[n]);
    printf("Modified value is of the array : \n");
    for(int j=0; j<10; j++){
        printf("%d\n", arr[j]);
    }
    return 0;
}