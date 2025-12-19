#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Unique elements in the array are:\n");
    
    for(int i=0;i<n;i++)
    {
int count=0;

for( int j=0;j<n;j++)
{
if(arr[i]==arr[j])
count++;
}
if(count==1)
{
    printf("%d\n",arr[i]);
}
    }
    printf("\n");
    return 0;
}





