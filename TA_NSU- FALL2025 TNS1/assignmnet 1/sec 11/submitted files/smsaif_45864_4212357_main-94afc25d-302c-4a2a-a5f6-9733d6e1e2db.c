#include <stdio.h>

void RevArr(int arr[], int size) {
    for(int i=0; i<size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

int main() {
    int arr[100], n;
    printf("Enter size: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    RevArr(arr, n);

    printf("Reversed array:\n");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}

