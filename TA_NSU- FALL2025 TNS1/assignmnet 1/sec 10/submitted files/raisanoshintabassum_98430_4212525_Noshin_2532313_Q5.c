#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    float a[n],sum=0,avg=0;
    printf("Enter elements:");
    for(i=0;i<n;i++)
        {
          scanf("%f",&a[i]);
          sum+=a[i];
        }
        avg=sum/n;
    printf("Average of the numbers=%.2f",avg);
    printf("\nElements which are greater than average:");
    for(i=0;i<n;i++)
    {
        if(a[i]>avg)
            printf("%.2f ",a[i]);
    }
    return 0;
    }

