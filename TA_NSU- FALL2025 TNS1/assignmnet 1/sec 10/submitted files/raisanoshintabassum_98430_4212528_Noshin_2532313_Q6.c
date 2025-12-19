#include<stdio.h>
int main()
{
    int n,i,c,j,count=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
        {
           scanf("%d",&arr[i]);
        }
        printf("Unique elements (occur only once):\n");
for(i=0;i<n;i++)
    {
        count=0;
     for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }

        if(count==1)
            printf("%d \n",arr[i]);
}
return 0;
  }



