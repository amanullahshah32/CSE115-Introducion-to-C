#include<stdio.h>

int main()
{
    int array[100];
    int size, element;

    printf("Enter the number of elements to insert: ");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Your current array is: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\nEnter the element you want to insert at the end: ");
    scanf("%d", &element);
    size++;

    array[size-1] = element;

    printf("the array is: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
}
