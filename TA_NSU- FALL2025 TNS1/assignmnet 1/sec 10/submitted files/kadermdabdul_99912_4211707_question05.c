#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    float arr[n];
    float sum=0;
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    float average=sum/n;
    printf("Average=%f\n",average);
    printf("The elements greater than average are:");
    int count=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>average)
        {
            if(count>0)
            {
                printf(", ");
            }
            printf("%g",arr[i]);
            count++;
        }
    }
    if(count==0) {
        printf("None");
    }
    printf("\n");
    return 0;
}
