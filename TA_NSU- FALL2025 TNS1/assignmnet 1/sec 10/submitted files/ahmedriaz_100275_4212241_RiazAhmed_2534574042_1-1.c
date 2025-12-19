#include <stdio.h>

int main() {
    int num;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    int a[num], i;
    printf("Enter %d unique integers: ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }

    int k;
    printf("Enter index to modify between 0 and %d: ", num - 1);
    scanf("%d", &k);

    int modified_val;
    printf("Enter modified value: ");
    scanf("%d", &modified_val);

    a[k] = modified_val;

    printf("Modified array: ");
    for (i = 0; i < num; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
