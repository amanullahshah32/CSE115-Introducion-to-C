#include<stdio.h>
int find_max(int *p,int size)
{
        int max=*p;
        for(int i=1;i<size;i++)
        {
           if(max<*(p+i))
           {
                max=*(p+i);
           }
        }
        return max;
}
int main()
{
    int ar[5];
    int* p=ar;
    printf("Enter the elements :\n");
    for(int i=0;i<5;i++)
    {
       printf("ar[%d]:",i);
        scanf("%d",(p+i));
    }
    printf("Elements in the Array= ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }

     int max=  find_max(p,5);
     printf("\nmax value is %d",max);
}
