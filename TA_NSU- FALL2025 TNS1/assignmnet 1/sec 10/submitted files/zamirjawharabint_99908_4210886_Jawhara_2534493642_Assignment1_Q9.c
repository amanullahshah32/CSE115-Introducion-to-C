#include<stdio.h>
void shiftArr1Pos(int arr1[], int arrSize)
{
    int temp= arr1[0];
    for(int i=0; i<arrSize-1; i++)
    {
        arr1[i]= arr1[i+1];
    }
}
void arr1Rotate(int arr1[], int arrSize, int rotFrom)
{
    int temp[100];
    int i, j=0;
    for(i=rotFrom; i<arrSize; i++)
    {
        temp[j]= arr1[i];
        j++;
    }
    for(i=0; i<rotFrom; i++)
    {
        temp[j]= arr1[i];
        j++;
    }
    for(i=0; i<arrSize; i++)
    {
        arr1[i]= temp[i];
    }
}

int main()
{

int arr1[100], arrSize, rotFrom, num, i;

{
    int arr1[100], arrSize, rotFrom, i;
    printf("Enter array size: ");
    scanf("%d", &arrSize);
    printf("Enter array elements: ");
    for(i=0; i<arrSize; i++)
        scanf("%d", &arr1[i]);

    printf("Enter rotation index: ");
    scanf("%d", &rotFrom);

    printf("From index %d position, array elements are: ", rotFrom);
    for(i=rotFrom; i<arrSize; i++)
        printf("%d ", arr1[i]);

    printf("\nArray elements prior to index %d: ", rotFrom);
    for(i=0; i<rotFrom; i++)
        printf("%d ", arr1[i]);

    arr1Rotate(arr1, arrSize, rotFrom);

    printf("\nAfter rotating from index %d, the array is: ", rotFrom);
    for(i=0; i<arrSize; i++)
        printf("%d ", arr1[i]);
}


}



