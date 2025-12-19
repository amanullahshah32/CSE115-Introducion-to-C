#include <stdio.h>
void shiftArr1Pos(int arr1[],int arrSize);
void arr1Rotate(int arr1[],int arrSize,int rotFrom);
int main() {
    int arrSize,rotFrom;
    printf("Enter array size:");
    scanf("%d",&arrSize);

    int arr1[arrSize];
    printf("Enter array elements:");
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter rotation position(index to rotate from):");
    scanf("%d",&rotFrom);
    if(rotFrom<0||rotFrom>=arrSize)
    {
        printf("Invalid rotation position!\n");
        return 1;
    }
    printf("\nFrom index %d Position, array elements are:",rotFrom);
    for(int i=rotFrom;i<arrSize;i++)
    {
        printf("%d  ",arr1[i]);
    }
    printf("\nArray elements prior to index %d: ",rotFrom);
    for(int i=0;i<rotFrom;i++)
    {
        printf("%d  ",arr1[i]);
    }
    arr1Rotate(arr1,arrSize,rotFrom);
    printf("\nAfter rotating from index %d, the array is:",rotFrom);
    for(int i=0;i<arrSize;i++)
    {
        printf("%d  ",arr1[i]);
    }
    printf("\n");

    return 0;
}
void shiftArr1Pos(int arr1[],int arrSize)
    {
    int temp=arr1[0];
    for (int i=0;i<arrSize-1;i++)
    {
        arr1[i]=arr1[i+1];
    }
    arr1[arrSize-1] =temp;
}
void arr1Rotate(int arr1[],int arrSize,int rotFrom)
{
    for(int i=0;i<rotFrom;i++)
    {
        shiftArr1Pos(arr1,arrSize);
    }
}
