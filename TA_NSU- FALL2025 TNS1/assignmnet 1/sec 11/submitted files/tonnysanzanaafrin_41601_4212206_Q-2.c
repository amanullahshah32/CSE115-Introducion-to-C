//Sanzana Afrin Tonny
//2231370042


#include <stdio.h>
int main() {
    int size = 5;
    int arr[5];
    printf("enter 5 integers:\n");
    for (int i = 0; i < size; i++) {
        printf("integer[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++) {
        printf("integer:[%d]: %d\n", i, arr[i]);
    }
    printf("which index do you want to delete?enter index num: ");
    int index;
    scanf("%d", &index);
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    } else {
        printf("Invalid index.\n");
    }
    printf("new array:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    return 0;
}

