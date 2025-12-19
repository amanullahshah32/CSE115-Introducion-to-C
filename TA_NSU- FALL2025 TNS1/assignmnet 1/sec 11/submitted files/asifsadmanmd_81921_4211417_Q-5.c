#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    float arr[n];
    float sum = 0;

    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum = sum + arr[i];
    }

    float avg = sum / n;
    printf("Average = %.2f\n", avg);
    printf("The elements greater than average are: ");

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > avg)
        {
            printf("%.0f ", arr[i]);
        }
    }

    return 0;
}
