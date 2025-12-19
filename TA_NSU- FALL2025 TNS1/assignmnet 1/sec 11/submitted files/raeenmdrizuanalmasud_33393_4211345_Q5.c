/* 5. Write a C program that reads the size and elements of an array of float values from
user and then computes the average of the numbers in it and prints it. Then it should
compute number of elements which are greater than average and prints those
elements.
Sample input/output:
Enter array size: 5
Enter elements: 12 13 16 15 14
Average = 14.000000, The elements greater than average are: 16, 15 */

#include <stdio.h>

int main()
{
    int n, i;
    float arr[100], sum = 0, avg;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Average = %.2f, The elements greater than average are: ", avg);

    for(i = 0; i < n; i++)
    {
        if(arr[i] > avg)
        {
            if(i != 0) printf("%s", "");
            printf("%.2f", arr[i]);
            if(i < n - 1) printf(", ");
        }
    }

    return 0;
}
