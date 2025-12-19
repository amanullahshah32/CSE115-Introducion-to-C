#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
Write a C program that reads the size and elements of an array of float values from
user and then computes the average of the numbers in it and prints it. Then it should
compute number of elements which are greater than average and prints those
elements.
    */

    int n;
    float arr[100];
    float sum = 0, avg;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Average = %.2f, The elements greater than average are: ", avg);

    for(int i = 0; i < n; i++){
        if(arr[i] > avg){
            printf("%.2f ", arr[i]);
        }
    }

    return 0;
}
