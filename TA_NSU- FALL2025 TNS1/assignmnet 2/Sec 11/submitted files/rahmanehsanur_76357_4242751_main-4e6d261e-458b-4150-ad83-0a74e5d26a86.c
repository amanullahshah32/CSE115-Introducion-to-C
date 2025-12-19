#include <stdio.h>
#include <stdlib.h>


int max(int *p, int size)
{
int biggest = *p;

    for (int i = 1; i < size; i++)
    {
        if (*(p + i) > biggest)
        {
            biggest = *(p + i);
        }
    }

    return biggest;
}


int main()
{
    int arr[] = {5, 12, 3, 2, 10};
     int size = 5;

    printf("Biggest element = %d", max(arr,size));
    return 0;
}
