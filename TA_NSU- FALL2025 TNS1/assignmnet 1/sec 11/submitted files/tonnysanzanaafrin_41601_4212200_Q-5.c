
//Sanzana Afrin Tonny
//2231370042

#include <stdio.h>

int main() {
    int n, i;
    int count = 0;
    float sum = 0.0;
    float avg;


    printf("enter the number of elements: ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("size can't be less than zero\n");
        return 1;
    }


    float arr[n];


    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum =sum+arr[i];
    }


    avg= sum / n;
    printf("\nAverage of the numbers: %.2f\n", avg);


    printf("numbers greater than the average: ");

    for (i = 0; i < n; i++) {
        if (arr[i] > avg) {
            printf("%.2f ", arr[i]);
            count++;
        }
    }

    printf("\nTotal number of numbers greater than average: %d\n", count);

    return 0;
}
