#include <stdio.h>

int main()
 {
    int n, i;
    float arr[100], sum=0, avg;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements: \n");
    for(i = 0; i < n; i++)
        {
        scanf("%f", &arr[i]);
        sum += arr[i];
       }

    avg = sum/n;

    printf(" Average = %.2f, \n The elements greater than average are: ", avg);
    for(i = 0; i < n; i++)
        {
        if(arr[i] > avg)

        printf("%.2f ", arr[i]);
       }

    return 0;
}

