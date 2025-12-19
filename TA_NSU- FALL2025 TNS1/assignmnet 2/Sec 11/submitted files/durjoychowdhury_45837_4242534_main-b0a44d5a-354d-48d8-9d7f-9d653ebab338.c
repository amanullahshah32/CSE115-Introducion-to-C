#include <stdio.h>

int max(int *p, int size) {
    int largest = *p;

    for (int i = 1; i < size; i++) {
        if (*(p + i) > largest) {
            largest = *(p + i);
        }
    }
    return largest;
}

int main() {
    int arr[100], n;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Largest element = %d\n", max(arr, n));
    return 0;
}
