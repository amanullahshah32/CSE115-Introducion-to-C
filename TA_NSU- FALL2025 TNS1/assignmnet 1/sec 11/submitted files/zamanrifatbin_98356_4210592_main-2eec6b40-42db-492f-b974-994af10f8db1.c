#include <stdio.h>
#include <stdlib.h>


   int main()
   {
    int n;
    scanf("%d", &n);

    float arr[n], sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    float avg = sum / n;
    printf("Average = %f, The elements greater than average are: ", avg);

    for(int i = 0; i < n; i++)
    if(arr[i] > avg)
    printf("%.0f ", arr[i]);

    return 0;
}

