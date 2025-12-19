#include<stdio.h>


 int main()
 {
     int n,i;
     float arr[100],sum=0,avg;
     printf("Enter the size of array: ");
     scanf("%d",&n);
     printf("Enter %d unique integers:\n",n);
     for(i=0;i<n;i++)
     {
         scanf("%f",&arr[i]);
         sum+=arr[i];
     }
     avg=sum/n;
     printf("The average: %f",avg);
     printf("Greater than avg: ");
     for(i=0;i<n;i++)
     {   if(arr[i]>avg)
         printf("%.2f ",arr[i]);
         else
            {printf("No greater value");}
            break;

     }


}
