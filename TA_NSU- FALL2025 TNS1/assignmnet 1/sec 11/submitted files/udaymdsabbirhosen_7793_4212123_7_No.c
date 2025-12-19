#include <stdio.h>

int main() {
    int n, i, j, count;
    int arr[100];
    int dupCount = 0;

    printf("Input the number of elements to be stored in array: ");
    scanf("%d", &n);

    printf("Input elements are:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > 1) {
            int alreadyCounted = 0;
            for (j = 0; j < i; j++) {
                if (arr[i] == arr[j]) {
                    alreadyCounted = 1;
                    break;
                }
            }
            if (!alreadyCounted) {
                dupCount++;
            }
        }
    }

    printf("Total number of duplicate element found in array: %d\n", dupCount);

    return 0;
}
