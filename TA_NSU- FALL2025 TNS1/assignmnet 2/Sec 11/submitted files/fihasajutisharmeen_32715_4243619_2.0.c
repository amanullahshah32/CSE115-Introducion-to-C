#include <stdio.h>
#include <stdlib.h>

//2)Write a code to arrange elements of array in ascending order (use pointers).

int main()
{
    int arr[5] = {5, 2, 9, 1, 3};
    int i;
    int j;
    int temp;
    int *p;

    p = arr;

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("Array in ascending order:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}
