#include<stdio.h>
int  main()
{
    int n;
    printf("Enter the value of the size of array :");
    scanf("%d",&n);
    float sum, arr[n];
    printf("Enter values: ");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);

    }
    sum=0.0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    float average=sum/n;
    printf("average = %f\n",average);
    for(int i=0;i<n;i++)
    {

        if(arr[i]>average)
        {
            printf("%f ",arr[i]);
        }
    }
}
