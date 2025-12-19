
//Sanzana Afrin Tonny
//2231370042



#include <stdio.h>
void RevArr(int arr[], int size);

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    RevArr(arr, n);
    printf("\nReversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void RevArr(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

