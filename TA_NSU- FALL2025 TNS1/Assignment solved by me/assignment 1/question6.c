
#include <stdio.h>

int main() {
    int arr[100], n, i, j, count;

    printf("Input the number of elements: ");
    scanf("%d", &n);

    printf("Input elements are: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The unique elements (appearing only once) are: ");

    // Outer loop: Pick one number to test
    for(i = 0; i < n; i++) {
        count = 0; // Reset counter for the new number

        // Inner loop: Check it against everyone else
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        // Logic: If a number is unique, it appears exactly 1 time (itself)
        if(count == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
