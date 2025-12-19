#include<stdio.h>
void shiftArr1Pos(int arr[], int arrSize)
{
    int first = arr[0];
    for(int i=0; i<arrSize-1 ; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[arrSize-1]=first;
}

void arr1Rotate(int arr[], int arrSize, int rotFrom)
{
    rotFrom=rotFrom%arrSize;
    printf("From index %d Position, array elements are:", rotFrom);
    for(int i=rotFrom; i<arrSize ; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nArray elements prior to index %d:", rotFrom);
     for(int i=0; i<rotFrom ; i++)
    {
        printf("%d ", arr[i]);
    }
    for(int i=0; i<rotFrom ; i++)
    {
        shiftArr1Pos(arr,arrSize);
    }
    printf("\nAfter rotating from index %d,the array is:", rotFrom);
     for(int i=0; i<arrSize ; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n, rot;
    printf("Enter the size of the elements:");
    scanf("%d", &n);
    int array[n];
    printf("Enter elements:");
    for(int i=0; i<n ; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter number of positions to rotate:");
    scanf("%d", &rot);
    arr1Rotate(array, n, rot);
    return 0;
}
