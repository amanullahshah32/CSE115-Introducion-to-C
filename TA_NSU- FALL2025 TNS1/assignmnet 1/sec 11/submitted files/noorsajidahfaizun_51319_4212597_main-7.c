#include <stdio.h>
#include <stdlib.h>

void shiftArr1Pos (int arr1[], int arrSize);
void arr1Rotate (int arr1[], int arrSize, int rotFrom);

int main()
{
    int n, rot, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter N (number of positions to rotate): ");
    scanf("%d", &rot);

    rot = rot % n;

    arr1Rotate(arr, n, rot);

    printf("Rotated array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
void shiftArr1Pos(int arr1[], int arrSize)
{
    int temp = arr1[0];

    for (int i = 0; i < arrSize - 1; i++)
    {
        arr1[i] = arr1[i + 1];
    }

    arr1[arrSize - 1] = temp;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom)
{

    for (int i = 0; i < rotFrom; i++)
    {
        shiftArr1Pos(arr1, arrSize);
    }
}
