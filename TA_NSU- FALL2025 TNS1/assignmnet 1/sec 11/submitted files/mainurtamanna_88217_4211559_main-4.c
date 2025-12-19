#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    float arr[n], sum = 0;
    printf("Enter elements: ");
    for(int i=0; i<n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    float avg = sum / n;
    printf("Average = %f\n", avg);
    printf("Elements greater than average are: ");

    for(int i=0; i<n; i++)
        if(arr[i] > avg)
            printf("%g ", arr[i]);



    return 0;
}
