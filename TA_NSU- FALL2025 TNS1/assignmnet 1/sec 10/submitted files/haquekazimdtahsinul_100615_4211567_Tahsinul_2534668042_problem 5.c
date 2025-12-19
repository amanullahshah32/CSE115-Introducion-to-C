#include <stdio.h>
int main() {
    int n, i;
    float arr[100], sum = 0, avg;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d float numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("Average = %.6f\n", avg);
    printf("Elements greater than average:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] > avg) {
            printf("%.2f ", arr[i]);
        }
    }
    return 0;
}
