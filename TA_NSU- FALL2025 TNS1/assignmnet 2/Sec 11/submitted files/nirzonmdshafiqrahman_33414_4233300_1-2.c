#include <stdio.h>
int max(int *p, int size) {
    int maxValue = *p;  
    for(int i = 1; i < size; i++) {
        if(*(p + i) > maxValue) {
            maxValue = *(p + i);
        }
    }
    return maxValue;
}
int main() {
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d numbers:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = max(arr, size);

    printf("Largest element = %d\n", largest);

    return 0;
}
