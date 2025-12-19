#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers:\n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Unique elements:");
    int unique=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            if(unique>0)
            {
                printf(", ");
            }
            printf("%d",arr[i]);
            unique++;
        }
    }
    if(unique==0)
    {
        printf("None");
    }
    printf("\n");
    return 0;
}
