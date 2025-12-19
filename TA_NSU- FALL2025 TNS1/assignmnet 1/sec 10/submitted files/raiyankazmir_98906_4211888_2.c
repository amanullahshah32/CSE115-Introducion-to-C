#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);

    printf("\nYour current array is: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }

    int k;

    printf("\nEnter the index you want to delete: ");
    scanf("%d", &k);

    for(int i = k; i < size; i++)
    {
        array[i] = array [i+1];
    }
    size--;

    printf("\nYour array now is: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
}
