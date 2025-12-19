#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Input the number of elements to be stored in array: ");
    scanf("%d", &n);

    int arr[n];
    int visited[n];

    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Input elements are: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            int freq = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    freq++;
                    visited[j] = 1;
                }
            }
            if (freq > 1) {
                count++;
            }
        }
    }

    printf("Total number of duplicate element found in array: %d\n", count);

    return 0;
}

