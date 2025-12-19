#include <stdio.h>
void func(int *p,int size);

int main()
{
    int i,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    func(arr,n);
    return 0;
}

void func(int *p, int size)
{
    int i,j,temp;
    printf("Ascending order:\n");
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(p+j)<*(p+i))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
    }
    }
    }

    for(i=0;i<size;i++)
        printf("%d\n",*(p+i));
}
