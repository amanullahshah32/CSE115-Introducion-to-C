#include <stdio.h>

void shiftArr1Pos(int arr[], int size)
{
    int temp;
    temp = arr[0];
    for(int i=0; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
}

void arr1Rotate(int arr[], int size, int rotFrom)
{
    for(int i=0; i<rotFrom; i++)
    {
        shiftArr1Pos(arr, size);
    }
}

int main() {
    int size,N;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter array elements: ");
    int arr[size];
    for(int i=0; i<size; i++)
        {
            scanf("%d", &arr[i]);
        }
    printf("Rotate from what position: ");
    scanf("%d", &N);
    printf("From index %d position elements are: ",N);
    for(int i=N; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nElements prior to index %d: ",N);
    for(int i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }
    arr1Rotate(arr, size, N);
    printf("\nAfter rotating from %d index: ",N);
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}
