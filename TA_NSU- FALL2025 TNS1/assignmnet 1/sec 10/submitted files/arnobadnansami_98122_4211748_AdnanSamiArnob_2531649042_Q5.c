#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0) return 0;

    float arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float avg = sum / n;

    printf("Average = %f, The elements greater than average are: ", avg);

    
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            
            printf("%g, ", arr[i]);
           
        }
    }


    return 0;
}