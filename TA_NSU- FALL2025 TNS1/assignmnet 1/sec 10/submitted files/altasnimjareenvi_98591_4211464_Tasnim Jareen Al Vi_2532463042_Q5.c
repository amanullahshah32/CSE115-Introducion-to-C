#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d", &n);
    float array[n], sum= 0.0, average;
    printf("Enter elements:");
    for(int i=0; i<n ; i++)
    {
        scanf("%f", &array[i]);
        sum += array[i];
    }
    average = sum/n;
    printf("Average:%f", average);

    printf("\nElements that are greater than the average:");
    for(int i=0; i<n ; i++)
    {
        if(array[i]>average)
        printf("%d ", (int)array[i]);
    }
    return 0;
}
