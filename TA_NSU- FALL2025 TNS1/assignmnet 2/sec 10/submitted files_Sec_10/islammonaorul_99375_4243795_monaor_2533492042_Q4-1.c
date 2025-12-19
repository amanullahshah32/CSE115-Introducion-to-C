#include <stdio.h>
void rev_arr(int arr[], int rev_arr[], int size) {

    int *src = arr + size - 1;
    int *dst = rev_arr;
    int i;
    for (i = 0; i < size; ++i) {
        *dst++ = *src--;
    }
}
int main(void) {
    int n;
    printf("Enter size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int rev[n];
    printf("Original array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    rev_arr(arr, rev, n);
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) printf("%d ", rev[i]);
    printf("\n");
}
