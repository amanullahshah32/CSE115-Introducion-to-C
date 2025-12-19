#include<stdio.h>
void shiftArr1Pos (int arr1[], int arrSize);
void arr1Rotate (int arr1[], int arrSize, int rotFrom);

int main()
{
    int n,i,n1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        printf("array[%d]= ",i);
        scanf("%d",&arr[i]);
    }

    printf("Number of rotation: ");
    scanf("%d",&n1);
    arr1Rotate(arr,n,n1);

    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}

void arr1Rotate (int arr1[], int arrSize, int rotFrom)
{
    for(int i=0; i<rotFrom; i++)
    {
        shiftArr1Pos(arr1,arrSize);
    }
}

void shiftArr1Pos (int arr1[], int arrSize)
{
    int i,temp=0;
    temp=arr1[0];
    for(i=0; i<arrSize-1; i++)
    {

        arr1[i]=arr1[i+1];

    }
    arr1[arrSize-1]=temp;


}

