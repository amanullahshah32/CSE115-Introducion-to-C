#include <stdio.h>

void RevArr(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        int tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    RevArr(arr, n);

    printf("Reversed array:\n");
    for (int i = 0; i < n; ++i) {
        if (i) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}