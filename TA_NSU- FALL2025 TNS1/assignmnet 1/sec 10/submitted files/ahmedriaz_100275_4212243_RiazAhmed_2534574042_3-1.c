#include <stdio.h>

int main() {
    int num;
    printf("Enter number of elements");
    scanf("%d", &num);
    int a[num+1],i;
    printf("Enter %d unique integers", num);
    for ( i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }

    int k;
    printf("Enter index to insert at between 0 and num-1 ");
    scanf("%d", &k);

    int Val;
    printf("Enter value to insert ");
    scanf("%d", &Val);
    for ( i = num - 1; i >= k; i--) {
        a[i + 1] = a[i];
    }
    a[k] = Val;
    num++; 
    printf("Array after insertion");
    for ( i = 0; i < num; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}