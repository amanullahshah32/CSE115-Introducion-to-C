#include <stdio.h>

int main() {
    int n, duplicateCount = 0;


    printf("Input the number of elements to be stored in array: ");
    scanf("%d", &n);

    int arr[n];


    printf("Input elements are: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < n; i++) {
        int isCounted = 0;


        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                isCounted = 1;
                break;
            }
        }


        if (!isCounted) {
            int count = 0;


            for (int j = i; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }


            if (count > 1) {
                duplicateCount++;
            }
        }
    }


    printf("Total number of duplicate element found in array: %d\n", duplicateCount);

    return 0;
}
