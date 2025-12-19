#include <stdio.h>

int ckperfect(int num) {
    if (num <= 1) return 0;

    int sum = 0;


    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int arr[10];
    int perfect[10];
    int i, count = 0;
    int maxPerfect = 0;


    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < 10; i++) {
        if (ckperfect(arr[i]) == 1) {
            perfect[count] = arr[i];
            count++;
        }
    }


    printf("\nOriginal array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }


    printf("\nPerfect numbers array: ");
    if (count == 0) {
        printf("No perfect numbers found");
    } else {
        for (i = 0; i < count; i++) {
            printf("%d ", perfect[i]);
        }
    }


    if (count > 0) {
        maxPerfect = perfect[0];
        for (i = 1; i < count; i++) {
            if (perfect[i] > maxPerfect) {
                maxPerfect = perfect[i];
            }
        }
        printf("\nMaximum perfect number: %d\n", maxPerfect);
    } else {
        printf("\nNo perfect numbers to find maximum.\n");
    }

    return 0;
}
