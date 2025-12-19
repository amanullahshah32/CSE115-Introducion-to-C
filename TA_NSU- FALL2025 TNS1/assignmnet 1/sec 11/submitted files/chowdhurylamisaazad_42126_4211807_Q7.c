#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicateCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;

        int alreadyChecked = 0;
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                alreadyChecked = 1;
                break;
            }
        }

        if (alreadyChecked) continue;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 1) {
            duplicateCount++;
        }
    }

    printf("Total number of duplicate elements = %d\n", duplicateCount);

    return 0;
}

