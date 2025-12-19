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
    int foundUnique=0;
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
            if(foundUnique>0)
            {
                printf(", ");
            }
            printf("%d",arr[i]);
            foundUnique++;
        }
    }
    if(foundUnique==0)
    {
        printf("None");
    }
    printf("\n");
    return 0;
}
