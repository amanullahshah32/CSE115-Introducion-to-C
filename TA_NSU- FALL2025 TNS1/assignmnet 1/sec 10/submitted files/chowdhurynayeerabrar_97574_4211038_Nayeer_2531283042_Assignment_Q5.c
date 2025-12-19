#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Enter array size: ");
    scanf("%d", &n);

    float arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    float avg = sum/n;
    printf("Average = %f, The elements greater than average are: ", avg);
    for(int i=0; i<n; i++)
        {
           if(arr[i] > avg)
           {
               printf("%.f ",arr[i]);
           }

        }
    return 0;
}
