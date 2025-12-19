#include<stdio.h>
int main()
{
    int X[100],n,i,j;

    printf("Number of Elements(maximum 99): ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("X[%d]= ",i);
        scanf("%d",&X[i]);
    }

    printf("New value to insert after %d elements: ",n);
    scanf("%d",&j);
    X[n]=j;
    n++;


    printf("Array after insertion: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", X[i]);
    }

}
