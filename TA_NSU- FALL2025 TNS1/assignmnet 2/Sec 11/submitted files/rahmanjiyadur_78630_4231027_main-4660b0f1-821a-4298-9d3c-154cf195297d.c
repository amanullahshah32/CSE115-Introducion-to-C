#include <stdio.h>
#include <stdlib.h>

/*
1)Implement the following function which finds the largest element in an array (use pointer)
int max (int *p, int size);
*/

int max(int *p, int size)
{
    int largest = p[0];

    for(int i = 1; i < size; i++) {
        if(*(p + i) > largest) {
            largest = *(p + i);
        }
    }
    return largest;
}

int main()
{
    int arr[] = {5, 9, 2, 11, 4};
    int size = 5;

    printf("Largest element: %d\n", max(arr, size));

return 0;
}
