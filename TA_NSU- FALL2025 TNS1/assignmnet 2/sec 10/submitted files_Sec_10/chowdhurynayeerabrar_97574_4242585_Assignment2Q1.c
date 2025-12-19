#include<stdio.h>

int Max(int *p,int size)
{
    int L=*p;
    for(int i=1;i<size;i++)
    {
        if(*(p+i)>L)
        {
            L=*(p+i);
        }
        return L;
    }
}
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int Arr[size];
    for (int i=0;i<size;i++)
        scanf("%d",&Arr[i]);
    printf("The largest element is: %d",Max(Arr,size));
}
