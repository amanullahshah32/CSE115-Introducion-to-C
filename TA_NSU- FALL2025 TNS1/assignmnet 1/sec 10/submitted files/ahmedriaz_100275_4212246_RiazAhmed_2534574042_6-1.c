#include <stdio.h>

int main() {
    int num;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    int a[num], i, j;

    printf("Enter %d integers: ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }

    printf("Unique elements are: ");
    for (i = 0; i < num; i++) {
        int count = 0;
        for (j = 0; j < num; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
