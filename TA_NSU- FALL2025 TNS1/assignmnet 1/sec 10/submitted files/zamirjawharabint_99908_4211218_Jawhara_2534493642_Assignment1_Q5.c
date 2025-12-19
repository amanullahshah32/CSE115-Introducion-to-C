#include<stdio.h>
int main()
{
    float arr[100], sum=0, avg;
    int i, num;

printf("Enter array size: ");
   scanf("%d", &num);

printf("Enter elements: ");
  for(i=0; i<num; i++)
  {
   scanf("%f", &arr[i]);
   sum= sum+ arr[i];
  }

avg= sum/(float)num;
printf("Average is %f\n", avg);

printf("The elements greater than the average are: ");
    for(i=0; i<num; i++)
        if(arr[i]>avg)
            printf("%f, ", arr[i]);

    return 0;
}
