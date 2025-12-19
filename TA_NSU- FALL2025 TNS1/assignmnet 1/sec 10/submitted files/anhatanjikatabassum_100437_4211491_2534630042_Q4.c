#include<stdio.h>
int main()
{
    int X[100];
    int n,i,newelement;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&X[i]);
    printf("Enter new element to insert after the first %d elements:",n);
    scanf("%d",&newelement);
    X[n=newelement];


    printf("Array after inserting new s\element:");
    for(i=0;i<n;i++)

    printf("%d",X[i]);
    printf("\n");
    return 0;
}
