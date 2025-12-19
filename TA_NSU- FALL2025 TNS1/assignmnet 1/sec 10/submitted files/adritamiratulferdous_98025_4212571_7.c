#include <stdio.h>

int main() {
    int n, i, j, count, duplicateCount = 0;
    int arr[n];


    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        count = 1;

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }

        if (count > 1 && arr[i] != -1) {
            duplicateCount++;
        }
    }

    printf("Number of duplicate element in an array= %d ", duplicateCount);

    return 0;
}
