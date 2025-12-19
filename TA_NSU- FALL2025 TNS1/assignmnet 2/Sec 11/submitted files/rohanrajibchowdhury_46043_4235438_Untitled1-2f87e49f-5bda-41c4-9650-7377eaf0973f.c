//Rohan Rajib Chowdhury
//ID 2312932043



#include <stdio.h>

int max(int *p, int size);

int main()
{
    int arr[] = {12, 45, 7, 89, 34};
    int size = 5;

    printf("Largest element = %d\n", max(arr, size));

    return 0;
}
int max(int *p, int size)
{
    int i;
    int largest = *p;
    for (i = 1; i < size; i++)
    {
        if (*(p + i) > largest)
        {
            largest = *(p + i);
        }
    }
    return largest;
}
