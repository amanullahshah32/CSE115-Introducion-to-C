#include<stdio.h>
int max (int *p, int size);
int main()
{
    int n,maximum=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr=arr;
    maximum= max(ptr,n);
    printf("Maximum is %d",maximum);
    return 0;
}
int max (int *p, int size)
{
    int MAX=*p;
    for(int i=0;i<size;i++)
    {
        if(*(p+i)>MAX)
            MAX=*(p+i);
    } return MAX;
}
