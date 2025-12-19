#include<stdio.h>

int main()
{
    int n, i, value;
    int x[100];
    printf("Enter the number of array element : ");
    scanf("%d",&n);

    printf("Enter %d elements : ", n);
    for(i = 0; i<n ; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("The array is :");
     for( i=0; i<n; i++)
    {
        printf(" %d",x[i]);
    }
    printf("\nEnter new element: ");
    scanf("%d",&value);

    x[n]= value;
    n++;
    printf("\nThe new list is : ");
    for( i=0; i<n; i++)
    {
        printf(" %d",x[i]);
    }



}
