#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Enter array size: ");
   scanf("%d", &n);

   float arr[n],sum=0,avg;

   printf("Enter elements ");
   for(int i=0; i<n ;i++)
   {
       scanf("%f", &arr[i]);
     sum=arr[i]+sum;
   }

   avg= sum/n;
   printf("The average is %f, The elements greater than the average are: ", avg);

   for (int i = 0; i<n ; i++)
   {
       if (arr[i]>avg)
       {
           printf("%f ",arr[i]);
       }
   }




    return 0;
}
