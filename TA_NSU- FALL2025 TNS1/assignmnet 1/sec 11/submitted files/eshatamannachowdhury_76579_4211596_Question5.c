#include<stdio.h>

int main()
{
    int n , i;
    float arr[100] , avg , sum=0;
    printf("Enter the number of array element : ");
    scanf("%d",&n);

    printf("Enter %d float elements : ", n);
    for(i = 0; i<n ; i++)
    {
        scanf("%f",&arr[i]);
        sum = sum+arr[i];
    }
    avg = sum/n;
    printf("Average is %.2f", avg);
    printf("\nElements greater than average: \n");
    for(i = 0; i<n ; i++)
    {
        if(arr[i] > avg)
            printf("%.2f ",arr[i]);
    }
    printf("\n");

}
