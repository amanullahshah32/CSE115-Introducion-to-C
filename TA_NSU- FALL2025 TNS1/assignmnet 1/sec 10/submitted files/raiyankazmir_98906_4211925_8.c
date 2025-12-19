#include<stdio.h>

void RevArr(int array[], int size)
{
    int copy[size];

    for(int i = 0; i < size; i++)
    {
        copy[i] = array[i];
    }
    for(int i = 0, j = size-1; i < size; i++, j--)
    {
        array[i] = copy[j];
    }

    printf("The reversed array is: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
}
int main()
{
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    RevArr(array, size);
}
