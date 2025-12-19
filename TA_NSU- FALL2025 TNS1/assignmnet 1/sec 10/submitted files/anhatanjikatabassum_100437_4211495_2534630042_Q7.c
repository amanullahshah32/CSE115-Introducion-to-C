#include<stdio.h>
int main()
{
    int n,i,j,count;

    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Input elements are: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("duplicate elements are: ");
   for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }

            if(count==1)
        printf("%d",arr[i]);
    }
    Printf("Total number of duplicate element found in array:%d",count);
    return 0;
}




