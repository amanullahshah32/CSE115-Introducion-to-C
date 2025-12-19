#include <stdio.h>
int main()
{
    int n;
    printf("Input the number of elements to be stored in array:");
    scanf("%d",&n);
    int arr[n];
    printf("Input elements are:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int duplicateCount=0;
    int checked[n];
    for(int i=0;i<n;i++)
    {
        checked[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(checked[i]==0)
        {
            int count=1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    checked[j]=1;
                }
            }
            if(count>1) {
                duplicateCount++;
            }
        }
    }
    printf("Total number of duplicate element found in array:%d\n",duplicateCount);
    return 0;
}
