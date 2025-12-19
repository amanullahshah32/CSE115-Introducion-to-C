#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    if (n <= 0) return 0;

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int unique[n];
    int unique_count = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) count++;
        }
        if (count == 1) {
            unique[unique_count++] = arr[i];
        }
    }

    printf("Unique elements are: ");
    if (unique_count == 0) {
        printf("None\n");
    } else {
        for (int i = 0; i < unique_count; i++) {
            if (i) printf(", ");
            printf("%d", unique[i]);
        }
        printf("\n");
    }

    return 0;
}
