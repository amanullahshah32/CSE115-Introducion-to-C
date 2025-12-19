#include <stdio.h>

int main() {
    int arr[100], n;
    int duplicateCount = 0;

    printf("Input the number of elements to be stored in array: ");
    scanf("%d", &n);

    printf("Input elements are:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {

        if (arr[i] == 999999)
           {
               continue;
           }

        int freq = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
                arr[j] = 999999;
            }
        }

        if (freq > 1)
            duplicateCount++;
    }

    printf("Total number of duplicate elements found in array: %d\n", duplicateCount);

    return 0;
}


