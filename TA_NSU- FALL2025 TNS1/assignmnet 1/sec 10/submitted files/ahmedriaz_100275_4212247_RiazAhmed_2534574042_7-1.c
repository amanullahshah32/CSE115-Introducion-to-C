#include <stdio.h>

int main() {
    int num;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    int a[num], i, j, k;
    printf("Enter %d integers: ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }

    int duplicatecount = 0;
    for (i = 0; i < num; i++) {
        int count = 0;
        for (j = 0; j < num; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > 1) {
            int firsttime = 1;
            for (k = 0; k < i; k++) {
                if (a[k] == a[i]) {
                    firsttime = 0;
                    break;
                }
            }
            if (firsttime == 1) {
                duplicatecount++;
            }
        }
    }

    printf("Total number of duplicate elements = %d", duplicatecount);

    return 0;
}

