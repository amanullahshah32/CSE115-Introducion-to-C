#include <stdio.h>

int main() {
    int n;
    int  count = 0;
    float arr[100];
    float sum = 0, avg;

    printf("Enter array size ");
    scanf("%d", &n);

    printf("Enter elements ");
    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Average = %f, The elements greater than average are: ", avg);

    for(int i = 0; i < n; i++) {
        if(arr[i] > avg) {
            printf("%f", arr[i]);
            count++;

            if(count < n)
                printf(", ");
        }
    }

    return 0;
}

