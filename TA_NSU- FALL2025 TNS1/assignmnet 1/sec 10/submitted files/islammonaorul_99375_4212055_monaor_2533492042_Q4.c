#include <stdio.h>
int main(void) {
    int X[100], n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter elements up to n : \n");
    for (int i = 0; i < n; i++) {
       scanf("%d", &X[i]);
    }
    int k;
    printf("Enter the value to add after the last n : ");
    scanf("%d", &k);
    X[n] = k;
    printf("The X[100] is : \n");
    for (int i = 0; i <= n; i++) {
        printf("%d\n", X[i]);
    }

    return 0;
}
