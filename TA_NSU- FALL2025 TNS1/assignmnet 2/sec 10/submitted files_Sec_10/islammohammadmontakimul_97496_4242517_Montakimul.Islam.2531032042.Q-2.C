#include <stdio.h>

void sortArray(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    sortArray(arr, size);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
