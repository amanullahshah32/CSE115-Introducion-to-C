#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to be stored in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input elements are: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int duplicateCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > 1) {
            duplicateCount++;
        }
    }

    duplicateCount /= 2;

    printf("Total number of duplicate element found in array: %d\n", duplicateCount);

    return 0;
}
