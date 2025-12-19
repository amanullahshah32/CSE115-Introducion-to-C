#include <stdio.h>

int main() {
    int X[100];
    int num, i;

    printf("Enter number of elements between 0 and 99: ");
    scanf("%d", &num);

    printf("Enter %d elements: ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &X[i]);
    }

    int newVal;
    printf("Enter new element to insert after the first %d elements: ", num);
    scanf("%d", &newVal);

    X[num] = newVal;  // Insert at index num
    num++;           // Increase size

    printf("Array after insertion: ");
    for (i = 0; i < num; i++) {
        printf("%d ", X[i]);
    }

    return 0;
}