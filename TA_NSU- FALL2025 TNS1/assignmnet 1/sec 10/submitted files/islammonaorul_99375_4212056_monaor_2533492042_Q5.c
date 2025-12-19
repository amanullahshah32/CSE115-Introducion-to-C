#include <stdio.h>

int main()
{
     int n,i,count = 0;
    float sum=0,avg;

    printf("Enter array size: ");
     scanf("%d",&n);

    float arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        {
        scanf("%f",&arr[i]);
        sum += arr[i];
    }

    avg=sum/n;
    printf("Average=%f\n",avg);
    printf("The elements greater than average are: ");
    for(i=0;i<n;i++)
        {if(arr[i]>avg)
         {
            printf("%f ", arr[i]);
            count++;
        }
    }
    printf("\nTotal greater elements: %d\n", count);

    return 0;
}
