#include <stdio.h>

int max(int *p, int size)
{
    int largest=*p;
    int i;

    for(i = 1; i < size; i++)
    {
        if(*(p+i) > largest)
            largest = *(p+i);
    }
    return largest;
}

int main()
{
int i,size;
int arr[size];
printf("Enter the size:");
scanf("%d",&size);
printf("Enter the elements:");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}


printf("Largest Element = %d\n", max(arr, size));

    return 0;
}
