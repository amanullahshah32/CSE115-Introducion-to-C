#include <stdio.h>
#include <stdlib.h>




void shiftArr1Pos(int arr1[],int arrSize)
    {
int temp =arr1[0];

    for (int i = 0;i<arrSize - 1; i++)
        {
        arr1[i]=arr1[i + 1];
        }

    arr1[arrSize - 1] = temp;
   }

    void arr1Rotate(int arr1[],int arrSize,int rotateFrom)
    {
    rotateFrom = rotateFrom %arrSize;

    for (int i = 0;i <rotateFrom;i++)
    {
        shiftArr1Pos(arr1,arrSize);
       }
     }

int main()
{
    int n,rot;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i =0; i <n; i++)
        {
        scanf("%d",&arr[i]);
        }

    printf("Enter number of positions to rotate: ");
    scanf("%d",&rot);


    arr1Rotate(arr,n, rot);


    printf("Rotated array: ");
    for (int i= 0;i<n;i++)
        {
        printf("%d ",arr[i]);
       }

    printf("\n");



    return 0;
}
