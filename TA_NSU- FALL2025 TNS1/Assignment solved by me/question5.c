
#include <stdio.h>

int main() {
    float arr[100]; // Must be float as per question
    int n, i;
    float sum = 0.0, avg;

    // 1. Input Size
    printf("Enter array size: ");
    scanf("%d", &n);

    // 2. Input Elements and Calculate Sum (Pass 1)
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i]; // Add to running total immediately
    }

    // 3. Calculate Average
    avg = sum / n;
    printf("Average = %f\n", avg);

    // 4. Find elements > Average (Pass 2)
    printf("The elements greater than average are: ");

    // We strictly follow the logic: check every element again
    for(i = 0; i < n; i++) {
        if(arr[i] > avg) {
            printf("%.0f ", arr[i]); // %.0f prints float without decimals (like 16, 15)
                                     // Remove .0 if you want decimals (e.g., 16.5)
        }
    }
    printf("\n");

    return 0;
}
