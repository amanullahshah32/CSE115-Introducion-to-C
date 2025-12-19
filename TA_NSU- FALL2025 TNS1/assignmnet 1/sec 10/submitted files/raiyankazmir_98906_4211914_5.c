#include<stdio.h>

int main()
{
    int size;
    float avg;
    float sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    float array[size];

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%f", &array[i]);
        sum += array[i];
    }

    printf("Your array is: ");
    for(int i = 0; i < size; i++)
    {
        printf("%f, ", array[i]);
    }

    avg = sum / size;

    printf("The average is: %f\n", avg);
    printf("The elements greater than the average is: ");
    for(int i = 0; i < size; i++)
    {
        if(array[i] > avg)
            printf("%f, ", array[i]);
    }

}
