#include <stdio.h>


void sortAsc(int *ptr, int size)
{
    int temp;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}


int main()
{
    int arr[] = {4, 1, 6, 2};
    int size = 4;
    sortAsc(arr, size);
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}
