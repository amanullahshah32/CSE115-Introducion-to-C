
#include <stdio.h>

int main() {
    int arr[100];
    int n, count = 0;
    int freq; // To count occurrences of a specific number

    // 1. Input
    printf("Input the number of elements: ");
    scanf("%d", &n);

    printf("Input elements are: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. Logic: Count Duplicates
    for(int i = 0; i < n; i++) {
        // Skip this number if we have already counted it as a duplicate
        // We check if arr[i] appeared previously in indices 0 to i-1
        int alreadyChecked = 0;
        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                alreadyChecked = 1;
                break;
            }
        }

        // If we haven't processed this number yet, let's count its frequency
        if(alreadyChecked == 0) {
            freq = 1; // It exists at least once (current position)

            // Look ahead to see if it appears again
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    freq++;
                }
            }

            // If frequency > 1, it's a duplicate item
            if(freq > 1) {
                count++;
            }
        }
    }

    // 3. Output
    printf("Total number of duplicate element found in array: %d\n", count);

    return 0;
}
