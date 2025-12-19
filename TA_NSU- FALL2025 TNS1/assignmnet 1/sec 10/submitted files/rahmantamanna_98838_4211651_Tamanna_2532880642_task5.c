#include<stdio.h>
int main()
{
    int i,n;
    float avg=0,sum=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    float arr[n];
    printf("Enter elements of array: ");
    printf("\n");

    for(i=0; i<n; i++)
    {
        printf("array[%d]=",i);
        scanf("%f", &arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("Average is %.2f\n", avg);

    for(i=0;i<n;i++)
    {
        if(arr[i]>avg)
            printf("%.2f is greater than Average\n",arr[i]);
    }
    return 0;
}



