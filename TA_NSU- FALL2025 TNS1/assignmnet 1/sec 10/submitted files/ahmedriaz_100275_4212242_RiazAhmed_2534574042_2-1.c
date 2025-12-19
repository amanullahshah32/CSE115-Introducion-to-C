#include <stdio.h>

int main() {
    int num;
    printf("Enter number of elements ");
    scanf("%d", &num);

    int a[num], i;
    printf("Enter %d unique integers", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }

    int k;
    printf("Enter index to delete between 0 and num-1 ");
    scanf("%d", &k);

    for (i = k; i < num - 1; i++) {
        a[i] = a[i + 1];
    }

    num--;

    printf("Array after deleting index ");
    for (int i = 0; i < num; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
