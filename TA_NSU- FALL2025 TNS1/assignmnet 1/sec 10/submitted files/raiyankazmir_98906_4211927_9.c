#include <stdio.h>

void shiftArr1Pos(int array[], int size, int n)
{
    int newarray[size];

    for(int i = n, j = 0; i < size; i++, j++)
    {
        newarray[j] = array[i];
    }
    for(int i = 0, j = size - n; i < n; i++, j++)
    {
        newarray[j] = array[i];
    }

    printf("Your new array is: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", newarray[i]);
    }
    printf("\n");
}

int main()
{
    int size, n;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to rotate from: ");
    scanf("%d", &n);

    shiftArr1Pos(array, size, n);

}
