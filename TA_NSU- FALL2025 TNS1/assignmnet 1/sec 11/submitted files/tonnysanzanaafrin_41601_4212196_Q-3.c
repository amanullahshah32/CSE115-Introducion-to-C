
//Sanzana Afrin Tonny
//2231370042


#include <stdio.h>
int main() {
    int size = 5;
    int arr[100];
    printf("enter 5 integers:\n");
    for (int i = 0; i < size; i++) {
        printf("integer[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++) {
        printf("integer:[%d]: %d\n", i, arr[i]);
    }
    printf("which index do you want to insert in?enter index num: ");
    int index;
    scanf("%d", &index);
    int val;
    printf("Enter the value you want to insert: ");
    scanf("%d", &val);
    if (index >= 0 && index <= size && size < 100) {  // Added capacity check
        for (int i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = val;
        size++;
    } else {
        printf("Invalid index or array full.\n");
    }
    printf("new array:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    return 0;
}

