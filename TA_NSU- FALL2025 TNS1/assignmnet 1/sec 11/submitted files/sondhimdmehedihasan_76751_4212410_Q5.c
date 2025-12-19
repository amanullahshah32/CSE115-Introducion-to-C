#include <stdio.h>
#include <stdlib.h>
//Q5
int main()
{
     int n;
    float sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter float values:\n", n);
    for(int i = 0; i < n; i++)
        {
        scanf("%f", &arr[i]);
        sum += arr[i];
        }

    float avg = sum / n;

    printf("Average = %.2f\n", avg);
    printf(" Elements greater than average: ");

    for(int i = 0; i < n; i++)
        {
        if(arr[i] > avg)
            printf("%.0f ", arr[i]);
        }


    return 0;
}
