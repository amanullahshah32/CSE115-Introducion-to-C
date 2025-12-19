// Property of Imtiaz 2512169

#include <stdio.h>

int main() 
{
    int i, size;
    float sum=0, average;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    float arr[size];
    
    printf("Enter elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%f", &arr[i]);
    }
    
    printf("Array: ");
    for(int i=0; i<size; i++)
    {
        printf("%.2f  ", arr[i]);
    }
    
    for(int i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }
    
    average = sum/size;
    
    printf("\nAverage is %.2f", average);
    
    printf("\nThe elements greater than average are: ");
    for(int i=0; i<size; i++)
    {
        if(arr[i] > average)
        {
            printf("%.2f ", arr[i]);
        }
    }

    return 0;
}

// Property of Imtiaz 2512169
