#include <stdio.h>
int main(){
    int n, i, k, newValue;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[100];
    printf("Enter %d unique integers:\n", n);
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
    printf("Enter index k to insert: ");
    scanf("%d",&k);
    printf("Enter new value: ");
    scanf("%d", &newValue);
    if(k > 0 && k < n){
        for(i = n; i > k; i--){
            arr[i] = arr[i - 1];}
        arr[k] =newValue; n++;
      printf("New array: ");
        for(i=0;i<n;i++)
            printf("%d",arr[i]);}
    else {
        printf("Invalid index!\n");}
        return 0;
}
