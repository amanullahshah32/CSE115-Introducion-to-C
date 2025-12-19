#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    float arr[n], sum=0, avg;
    printf("\nEnter %d float values of the array:\n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%f", &arr[i]);
        sum+=arr[i];
    }

    avg=sum/n;
    printf("\nAverage=%f\n", avg);

    printf("\nElements greater than average:\n");
    for(int i=0; i<n; i++)
    {
        if(arr[i]>avg)
            printf("%f, ", arr[i]);
    }
    return 0;
}
