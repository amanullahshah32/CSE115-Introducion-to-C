#include<stdio.h>
void rev_array(int arr1[],int rev_arr1[],int size)
{
    int i=0;
    int j=size-1;
    while(i<size)
    {
        rev_arr1[i]=arr1[j];
        i++;
        j--;

    }

}

void rev_array1(int* arr1,int *rev_arr1,int size)
{
    int i=0;
    int j=size-1;
    while(i<size)
    {
        *(rev_arr1+i)=*(arr1+j);
        i++;
        j--;

    }

}

int main()
{
    int arr[100];
    int rev_arr[100];
    int size;
    printf("Enter size of the array =");
    scanf("%d",&size);
    printf("Enter elements of array :\n");
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);

    }
    rev_array(arr,rev_arr,size);
    printf("After reversing(normal method) :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",rev_arr[i]);
    }
    printf("\n");

    rev_array1(arr,rev_arr,size);
    printf("Using pointe reverse :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",rev_arr[i]);
    }

}
