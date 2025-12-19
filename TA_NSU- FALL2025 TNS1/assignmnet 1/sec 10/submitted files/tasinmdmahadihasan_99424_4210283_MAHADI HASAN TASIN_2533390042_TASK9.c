#include <stdio.h>
void shiftArr1Pos(int arr1[], int arrSize)
{
    int temp=arr1[0];
    for(int i=0; i<arrSize-1; i++)
        arr1[i]=arr1[i+1];
    arr1[arrSize-1]=temp;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom)
{
    for(int i=0; i<rotFrom; i++)
        shiftArr1Pos(arr1, arrSize);
}

int main() {
    int arr[20], n, rotFrom;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter rotation index: ");
    scanf("%d", &rotFrom);

    printf("From index %d Position, array elements are: ", rotFrom);
    for(int i=rotFrom; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Array elements prior to index %d: ", rotFrom);
    for(int i=0; i<rotFrom; i++)
        printf("%d ", arr[i]);
    printf("\n");

    arr1Rotate(arr, n, rotFrom);

    printf("After rotating from index %d, the array is: ", rotFrom);
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}
