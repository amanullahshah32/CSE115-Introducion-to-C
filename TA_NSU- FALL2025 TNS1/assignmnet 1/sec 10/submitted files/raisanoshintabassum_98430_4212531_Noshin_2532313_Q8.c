#include<stdio.h>
void RevArr ( int arr[], int size);
int main()
{
    int i,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
       RevArr(a,n);
       return 0;
}
void RevArr ( int arr[], int size)
{
    int i,j;
    printf("Reversed array:\n");
    for(j=size-1;j>=0;j--)
    {
      printf("%d\n",arr[j]);
    }
}
