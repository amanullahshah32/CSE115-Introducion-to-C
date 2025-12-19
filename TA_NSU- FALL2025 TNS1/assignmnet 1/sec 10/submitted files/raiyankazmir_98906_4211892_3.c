#include <stdio.h>

int main()
{
    int array[10] = {1, 2, 3, 4, 5};
    int size = 5;
    printf("\nYour current array is: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }

    int k,n;

    printf("\nEnter the index you want to insert in: ");
    scanf("%d", &k);
    printf("Enter the value you want to insert: ");
    scanf("%d", &n);

    for(int i = size; i > k; i--)
    {
        array[i] = array [i-1];
    }
    array[k] = n;
    size++;

    printf("\nYour array now is: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
}
