#include <stdio.h>
void rev_arr(int *arr1, int *rev_arr1, int size) {
    for (int i = 0; i < size; i++) {    
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

int main() {
  int size;
  printf("Enter array size : ");
  scanf("%d",&size);
    int arr[size];
    printf("Enter array elements :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int rev[size];
    rev_arr(arr, rev, size);
    printf("\nReversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ",rev[i]);
    }
    return 0;
}