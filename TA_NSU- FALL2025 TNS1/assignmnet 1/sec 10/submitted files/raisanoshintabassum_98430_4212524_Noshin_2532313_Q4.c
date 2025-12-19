#include<stdio.h>
int main()
{
    int n,i,k;
    int X[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&X[i]);
    }
    printf("Enter the new element to insert at index no.%d:",n);
    scanf("%d", &k);
    X[n]=k;
    n++;
   printf("Array after insertion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",X[i]);
    }
    return 0;
}



