#include <stdio.h>

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

    printf("Elements that dont repeat are: ");

    for(int i = 0; i < size; i++)
    {
        int repeats = 0;
        for(int j = 0; j < size; j++)
        {
            if(array[i] == array[j])
            {
                repeats++;
            }
        }
        if(repeats == 1)
        {
            printf("%d, ", array[i]);
        }
    }
}
