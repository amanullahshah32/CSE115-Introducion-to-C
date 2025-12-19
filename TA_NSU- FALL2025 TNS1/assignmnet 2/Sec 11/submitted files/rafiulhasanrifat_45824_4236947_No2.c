#include <stdio.h>
void sortAscending(int *p, int size)
{
    int temp;

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {45, 12, 78, 3, 25};
    int size = 5;
    sortAscending(arr, size);
    printf("Array in ascending order:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
   return 0;
}

