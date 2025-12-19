#include<stdio.h>
int max(int *p, int size){
    int *end = p + size;
    int max2 = *p;
    for (int *ptr = p + 1; ptr < end; ++ptr) {
        if (*ptr > max2) {
            max2 = *ptr;
        }
    }
    return max2;
}
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The largest element is: %d\n", max(arr, n));

}