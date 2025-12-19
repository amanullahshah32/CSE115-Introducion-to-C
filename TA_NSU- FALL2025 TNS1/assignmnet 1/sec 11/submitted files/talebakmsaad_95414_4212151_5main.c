#include <stdio.h>

int main() {
    float arr[100], sum = 0, avg;
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];

    }

    avg = sum / n;

    printf("Average = %f\n", avg);

    printf("Greater than average: ");

    for(i = 0; i < n; i++) {
        if(arr[i] > avg)

            printf("%g ", arr[i]);
    }


    return 0;
}


