#include<stdio.h>
int max(int *p, int size)
{
    int i,max;
    max=*p;
    for(i=1;i<size;i++)
    {
        if(*(p+i)>max)
            max=*(p+i);
    }
    return max;
}

int main()
{
   int i,n,v;
   printf("Enter size of array:");
   scanf("%d",&n);
   int array[n];
   printf("Enter elements:\n");
   for(i=0;i<n;i++)
       { scanf("%d",&array[i]);}
        v=max(array,n);
   printf("Largest number:%d",v);
   return 0;
}