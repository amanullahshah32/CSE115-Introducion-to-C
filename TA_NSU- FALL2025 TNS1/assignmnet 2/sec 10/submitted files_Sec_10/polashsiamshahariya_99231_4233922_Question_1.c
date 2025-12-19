#include<stdio.h>
int max(int *p,int size)
{
    int maxv=*p;
    for (int i=1;i<size; i++)
    {
         if (*(p+i)>maxv)
            {
            maxv = *(p+i);
        }
    }

    return maxv;
}


int main()
{
    int arr1[100];
    int n;
    printf("enter the size of arry:");
    scanf("%d",&n);

    printf("Enter element of Array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("\nAray:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    int maximum=max(arr1,n);

    printf("\nmax element: %d",maximum);
}
