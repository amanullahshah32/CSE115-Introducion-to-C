#include <stdio.h>

void RevArr(int arr[], int size) {
    int first = 0, last = size - 1, temp;

    while (first < last) {
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;

        first++;
        last--;
    }
}

int main() {
    int num, i;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    int a[num];

    printf("Enter %d integers: ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }

    RevArr(a, num);

    printf("Reversed array: ");
    for (i = 0; i < num; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
