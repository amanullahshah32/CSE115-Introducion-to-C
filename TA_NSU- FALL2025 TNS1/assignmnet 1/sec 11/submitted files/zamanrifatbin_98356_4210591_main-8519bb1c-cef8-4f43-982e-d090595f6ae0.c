#include <stdio.h>
#include <stdlib.h>



     int main()
    {
    int X[100], n, newVal;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    scanf("%d", &X[i]);

    scanf("%d", &newVal);

    X[n] = newVal;
    n++;

    for(int i = 0; i < n; i++)
    printf("%d ", X[i]);
    return 0;
}
