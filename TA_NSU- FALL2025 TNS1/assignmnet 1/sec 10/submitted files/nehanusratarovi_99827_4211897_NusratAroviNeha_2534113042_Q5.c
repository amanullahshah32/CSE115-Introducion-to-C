#include<stdio.h>
int main()
{
   int n;
   float sum=0,avg;
   printf("Enter the size of the array:");
   scanf("%d",&n);
   float arr[n];
   printf("Enter the elements of the array:\n");
   for(int i=0;i<n;i++)
   {
    scanf("%f",&arr[i]);
   }
   for(int i=0;i<n;i++)
{
   sum+=arr[i];
}

avg=sum/n;
printf("Average of the elements :%f",avg);


printf("\n\nThe elements greater than the average are:\n");

for(int i=0;i<n;i++)
{
   if(arr[i]>avg)
   printf("%f\n",arr[i]);
}
   
return 0;

}