#include <stdio.h>

int main() {
    int n;
    float arr[100], sum=0, avg;
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum/n;
    printf("Average = %f\n", avg);
    printf("Elements greater than average: ");
    for(int i=0; i<n; i++) if(arr[i] > avg) printf("%f ", arr[i]);
    return 0;
}

