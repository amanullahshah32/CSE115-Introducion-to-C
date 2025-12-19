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

    int count = 0;

    for(int i = 0; i < size; i++)
    {
        int repeats = 0;
        for(int j = 0; j < size; j++)
        {
            if(array[i] == array[j])
                repeats++;
        }
        if(repeats > 1)
        {
            int seen = 0;
            for(int k = 0; k < i; k++)
            {
                if(array[k] == array[i])
                    seen = 1;
            }
            if(!seen)
                count++;
        }
    }

    printf("\nNumber of repeating elements are: %d\n", count);
}
