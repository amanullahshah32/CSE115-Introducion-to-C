#include<stdio.h>
int main()
{
    int n, X[100], y;

    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&X[i]);
    }
    printf("Enter the new element to insert after populate the first %d elements:",n);
    scanf("%d",&y);

    X[n]=y;
    n++;
    printf("Array after insertion:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",X[i]);
    }
 return 0;

}