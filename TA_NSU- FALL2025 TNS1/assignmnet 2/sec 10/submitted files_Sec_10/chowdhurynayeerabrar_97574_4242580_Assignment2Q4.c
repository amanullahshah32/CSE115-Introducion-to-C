#include<stdio.h>

void rev_arr(int arr1[],int rev_arr1[],int size)
{
    for (int i=0;i<size;i++)
        rev_arr1[i]=arr1[size-i-1];
}

void rev_arrPtr(int *arr1,int *rev_arr1,int size)
{
    for (int i=0;i<size;i++)
        *(rev_arr1+i)= *(arr1+(size-i-1));
}

int main()
{
    int arr1[5];
    int revarr1[5];
    printf("Enter elements: ");
    for (int i=0;i<5;i++)
        scanf("%d",&arr1[i]);
    rev_arr(arr1,revarr1,5);
    for (int i=0;i<5;i++)
        printf("%d ",revarr1[i]);
    printf("\n");
    rev_arrPtr(revarr1,revarr1,5);
    for (int i=0;i<5;i++)
        printf("%d ",revarr1[i]);
}
