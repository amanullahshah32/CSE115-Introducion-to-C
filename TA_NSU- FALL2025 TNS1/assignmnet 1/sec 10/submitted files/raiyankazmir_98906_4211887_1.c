#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};

    printf("\nYour current array is: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d, ", array[i]);
    }

    int k, value;
    printf("\nEnter the index to modify: ");
    scanf("%d", &k);
    printf("Enter new value: ");
    scanf("%d", &value);
    array[k] = value;

    printf("Your new array is: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d, ", array[i]);
    }
}
