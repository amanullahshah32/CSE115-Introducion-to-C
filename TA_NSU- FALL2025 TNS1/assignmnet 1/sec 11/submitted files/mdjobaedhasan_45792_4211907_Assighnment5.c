#include <stdio.h>

int main() {
    int n,i;
        printf("Enter the array size : ");
        scanf("%d", &n);

    float arr[n], sum = 0, avg;
        printf("Enter the elements :\n");
    for(i = 0; i < n; i++){
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;
        printf("Average = %.6f\n", avg);
        printf("The elements greater than average are : ");

    for(i = 0; i < n; i++)
        if(arr[i] > avg)
            printf("%.0f ", arr[i]);

    return 0;
}
