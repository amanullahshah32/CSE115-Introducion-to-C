#include<stdio.h>

void shiftArr1Pos(int arr1[],int arrSize);
void arr1Rotate(int arr1[],int arrSize,int rotFrom);

int main()
{
    int size,N;

    printf("Enter the size of array:");
    scanf("%d",&size);

    int arr[size];


    printf("Enter array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter index position to rotate from:");
    scanf("%d",&N);

    printf("\nfrom index %d position,array elements are:",N);
    for(int i=0;i<N;i++)
    {
        printf("%d",arr[i]);
    }

    printf("\n");

    N=N%size;
    arr1Rotate(arr,size,N);

    printf("\nafter rotating for index %d,the array is:",N);
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }

    printf("\n");


    return 0;
}


void shiftArr1Pos(int arr1[],int arrSize)
{
    int temp=arr1[arrSize-1];
    for(int i=arrSize-1;i>0;i--)
    {
        arr1[i]=arr1[i-1];
    }
    arr1[0]=temp;
}

void arr1Rotate(int arr1[],int arrSize,int rotFrom)
{
    int temp[rotFrom];
    for(int i=0;i<rotFrom;i++)
    {
        temp[i]=arr1[i];
    }
    for(int i=rotFrom;i<arrSize;i++)
    {
        arr1[i-rotFrom]=arr1[i];
    }
    for(int i=0;i<rotFrom;i++)
    {
        arr1[arrSize-rotFrom+i]=temp[i];
    }
}