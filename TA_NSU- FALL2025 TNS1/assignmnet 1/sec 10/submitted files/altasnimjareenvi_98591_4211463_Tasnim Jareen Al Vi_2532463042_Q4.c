#include<stdio.h>
int main()
{
    int X[100];
    int n, newvalue;
    printf("Enter the size of the initial elements:");
    scanf("%d", &n);
    for(int i=0; i<n ; i++)
    {
        scanf("%d", &X[i]);
    }

    printf("Add a new element after the %d index:", n);
    scanf("%d", &newvalue);

    X[n] = newvalue;
    n++;

    printf("Array after adding new element:");
    for(int i=0; i<n ; i++)
    {
        printf("%d ", X[i]);
    }
    return 0;
}
