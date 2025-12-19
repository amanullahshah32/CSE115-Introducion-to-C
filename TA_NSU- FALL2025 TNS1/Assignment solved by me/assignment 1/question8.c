
#include <stdio.h>

// Function Prototype
void RevArr(int arr[], int size);

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    // Call the function
    RevArr(arr, n);

    printf("Reversed array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

// Function Definition
void RevArr(int arr[], int size) {
    int temp;
    int start = 0;
    int end = size - 1;

    // Loop until the two pointers meet in the middle
    while (start < end) {
        // SWAP LOGIC
        temp = arr[start];      // 1. Save Left value
        arr[start] = arr[end];  // 2. Overwrite Left with Right
        arr[end] = temp;        // 3. Overwrite Right with Saved Left

        // Move pointers
        start++;
        end--;
    }
}
