#include<stdio.h>
void arraysort(int *ptr,int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                int temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    printf("Ascending array:");
    for(i=0; i<n; i++)
    {
        printf("%d, ",*(ptr+i));
    }
}

int main()
{
    int n,i,j;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    printf("Enter elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d",(ptr+i));
    }

    arraysort(ptr,n);


}
