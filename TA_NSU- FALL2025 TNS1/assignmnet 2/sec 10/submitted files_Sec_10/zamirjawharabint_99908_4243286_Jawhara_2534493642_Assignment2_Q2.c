#include<stdio.h>
void asc(int *p, int size)
{
    int i, j , temp;
    for(i=0; i<size-1; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(*(p+i)> *(p+j))
            {
                temp= *(p+i);
                *(p+i)= *(p+j);
                *(p+j)= temp;
            }
        }
    }
}
int main()
{
    int arr[5];
    printf("enter array elements: ");
    for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);

    asc(arr, 5);
    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
}
