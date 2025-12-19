#include <stdio.h>

int main()
{
    int X[100], n, val;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &X[i]);
    }
    printf("Enter new value: ");
    scanf("%d", &val);

    X[n] = val;
    n++;
    printf("Updated Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", X[i]);
    }
}
