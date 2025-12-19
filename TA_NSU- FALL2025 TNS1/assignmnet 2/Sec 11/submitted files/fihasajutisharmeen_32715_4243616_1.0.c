#include <stdio.h>
#include <stdlib.h>

//1)Implement the following function which finds the largest element in an array (use pointer)  int max (int *p, int size);

int max(int *p, int size)
{
    int i;
    int largest;

    largest = *p;

    for(i = 1; i < size; i++)
    {
        if(*(p + i) > largest)
        {
             largest = *(p + i);
        }
    }

    return largest;
}

int main()
{
    int arr[5] = {10, 25, 7, 40, 15};
    int result;

    result = max(arr, 5);

    printf("Largest element = %d", result);

    return 0;
}
