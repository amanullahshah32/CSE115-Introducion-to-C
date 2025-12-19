#include<stdio.h>
int main()
{
    int n,i,j,temp=0;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p;
    p=arr;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
