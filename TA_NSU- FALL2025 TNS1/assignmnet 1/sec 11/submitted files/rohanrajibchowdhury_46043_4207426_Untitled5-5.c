//Rohan Rajib Chowdhury
//ID 2312932043

#include <stdio.h>

int main() {
    int n, i, count = 0;
    float arr[100], sum = 0.0, avg;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Average = %f, The elements greater than average are: ", avg);

    for(i = 0; i < n; i++) {
        if(arr[i] > avg) {
            if(count > 0)
                printf(", ");
            printf("%.0f", arr[i]);
            count++;
        }
    }

    return 0;
}
