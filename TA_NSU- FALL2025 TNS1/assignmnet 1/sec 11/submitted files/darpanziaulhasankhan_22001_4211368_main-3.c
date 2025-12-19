#include <stdio.h>

int main() {
    int X[100], n, newVal;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter %d values:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&X[i]);

    printf("Enter new element: ");
    scanf("%d",&newVal);

    X[n] = newVal;
    n++;

    printf("Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",X[i]);
}
