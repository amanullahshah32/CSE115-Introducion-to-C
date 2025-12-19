#include <stdio.h>
int max(int *p, int size) {
    int maxVal = *p;
    for(int i = 1; i < size; i++) {
        if(*(p + i) > maxVal) {
            maxVal = *(p + i);
        }
    }
    return maxVal;
}
int main() {
    int arr[] = {10, 25, 3, 78, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = max(arr, size);
    printf("Largest element = %d\n", largest);
    return 0;
}
