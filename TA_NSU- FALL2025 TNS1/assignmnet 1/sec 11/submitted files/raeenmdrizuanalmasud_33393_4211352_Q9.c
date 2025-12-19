/* 9. Write a C program to rotate an array by N positions (N to be given by user). Function
prototype: void shiftArr1Pos (int arr1[], int arrSize); void arr1Rotate (int arr1[], int
arrSize, int rotFrom)
 */

 #include <stdio.h>

void shiftArr1Pos(int arr1[], int arrSize)
{
    int i, temp = arr1[arrSize - 1];
    for(i = arrSize - 1; i > 0; i--)
    {
        arr1[i] = arr1[i - 1];
    }
    arr1[0] = temp;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom)
{
    int i;
    for(i = 0; i < rotFrom; i++)
    {
        shiftArr1Pos(arr1, arrSize);
    }
}

int main()
{
    int arr1[100];
    int n, rotFrom, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &rotFrom);

    arr1Rotate(arr1, n, rotFrom);

    printf("Array after rotation: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}
