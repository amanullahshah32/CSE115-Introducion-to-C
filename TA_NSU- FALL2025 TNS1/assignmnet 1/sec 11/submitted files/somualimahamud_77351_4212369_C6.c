#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of the size of array :");
    scanf("%d",&n);
    int sum, arr[n];
    printf("Enter values(uniqueness is not mendatory): ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    int freq[n];

    for(int i=0;i<n;i++)
    {
      freq[i]=0;

    }
     for(int i=0;i<n;i++)
    {
      printf("%d",freq[i]);

    }

}
