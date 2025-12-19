#include <stdio.h>
int main() {
    int n,i,k;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d unique integers:\n", n);
    for(i =0; i< n;i++)
    scanf("%d",&arr[i]);
    printf("Enter index k to delete: ");
    scanf("%d",&k);
    if(k >0 &&k < n){
        for(i =k;i < n - 1; i+){
            arr[i]=arr[i+1];}
       printf("New array: ");
        for(i = 0; i < n - 1; i++)
            printf("%d ", arr[i]);}
    else {
    printf("Invalid index!\n");
    }
    return 0;
}
