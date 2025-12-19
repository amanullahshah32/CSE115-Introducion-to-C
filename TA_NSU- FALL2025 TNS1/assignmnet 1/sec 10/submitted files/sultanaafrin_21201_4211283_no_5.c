#include <stdio.h>

int main() {
    float arr[100], sum = 0, avg;
    int n, i;

    printf("Enter array size: "); //5
    scanf("%d", &n);
    printf("Enter elements: "); //12 13 16 15 14
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;
    printf("Average = %f\n", avg);
    printf("The elements greater than average are: ");

    for(i = 0; i < n; i++) {
        if(arr[i] > avg) {
            printf("%.0f ", arr[i]);
        }
    }
    return 0;
}
