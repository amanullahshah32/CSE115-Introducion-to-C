#include <stdio.h>
#include <stdlib.h>

int main()
{
 int X[100], n, newValue;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &X[i]);

    printf("Enter new element to insert: ");
    scanf("%d", &newValue);

    X[n] = newValue;
    n++;

    printf(" New Array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", X[i]);

    return 0;
}
