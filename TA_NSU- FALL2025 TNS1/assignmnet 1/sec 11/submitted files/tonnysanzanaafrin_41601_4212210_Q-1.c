
//Sanzana Afrin Tonny
//2231370042


#include <stdio.h>
int main() {
    int arr[5];
    printf("enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("integer[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("integer:[%d]: %d\n", i, arr[i]);
    }
    printf("which index do you want to modify?enter index num: ");
    int index;
    scanf("%d", &index);
    if (index >= 0 && index < 5) {
        printf("enter the num you want in index %d: ", index);
        int modi;
        scanf("%d", &modi);
        arr[index] = modi;
    } else {
        printf("Invalid index.\n");
    }
    printf("new array:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    return 0;
}

