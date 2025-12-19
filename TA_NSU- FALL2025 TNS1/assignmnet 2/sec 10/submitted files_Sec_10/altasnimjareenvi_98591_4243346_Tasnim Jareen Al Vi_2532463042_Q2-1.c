#include<stdio.h>
void ascendingorder(int *p, int n)
{
   int i,j;
   for( i=0;i<n-1;i++)
    {
        for( j=i+1;j<n;j++)
        {
          if(*(p+j)<*(p+i))
          {
             int temp=*(p+i);
              *(p+i)=*(p+j);
              *(p+j)=temp;
          }
        }
    }
printf("Ascending order:\n");
for(i = 0; i <n; i++)
 printf("%d\n",*(p+i));
}
int main()
{
   int i,n,k;
   printf("Enter size of array:");
   scanf("%d",&n);
   int array[n];
   printf("Enter elements:\n");
   for(i=0;i<n;i++)
        scanf("%d",&array[i]);
        ascendingorder(array,n);
   return 0;
}