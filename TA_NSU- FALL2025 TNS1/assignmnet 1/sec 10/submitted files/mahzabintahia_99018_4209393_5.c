#include<stdio.h>
int main()
{
    float arr[100], sum=0.0, avg;
    int i, n;

    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%f", &arr[i]);
        sum= sum+ arr[i];
    }
    avg= sum/(float)n;
    printf("Average is %.2f", avg);

    printf(" ,The elements greater than average are: ");
    for(i=0; i<n; i++)
        if(arr[i]>avg)
            printf("%.2f, ", arr[i]);

    return 0;
}
