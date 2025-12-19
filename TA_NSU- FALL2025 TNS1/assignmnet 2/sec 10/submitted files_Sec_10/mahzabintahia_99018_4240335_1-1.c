#include<stdio.h>
int max(int *p, int size)
{
    int largest= *p;
    for(int i=1; i<size; i++)
    {
        if(*(p+i)> largest)
            largest= *(p+i);
    }
    return largest;
}

int main()
{
    int arr[5]={12, 5, 45, 23, 67, 34};
    printf("max= %d\n", max(arr,5));
    return 0;
}
