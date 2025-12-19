#include <stdio.h>

void shiftArr1Pos(int arr[], int size) {
int first = arr[0];
for (int i = 0; i < size - 1; i++)
arr[i] = arr[i + 1];
arr[size - 1] = first;
}

void arr1Rotate(int arr[], int size, int n) {
n %= size;
for (int i = 0; i < n; i++)
shiftArr1Pos(arr, size);
}

int main() {
int n, arr[100], rot;

printf("Enter size: ");
scanf("%d", &n);

printf("Enter elements: ");
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);

printf("Enter rotation number: ");
scanf("%d", &rot);

arr1Rotate(arr, n, rot);

printf("After rotation: ");
for (int i = 0; i < n; i++)
printf("%d ", arr[i]);

return 0;
}
