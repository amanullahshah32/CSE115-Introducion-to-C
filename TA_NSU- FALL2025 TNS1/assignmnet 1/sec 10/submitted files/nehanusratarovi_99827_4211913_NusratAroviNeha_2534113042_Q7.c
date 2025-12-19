#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("Enter the number of elements to be stored in array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
{
    
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
    {
       count++;
       break;
    }
        
    }
}

printf("Total number of duplicate element found in array:%d",count);

return 0;
}