#include <stdio.h>

int main() {
int arr[100];
int n, i, k, value;


printf("Enter array size: ");
scanf("%d", &n);


printf("Enter elements: ");
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

printf("Enter index k to insert at: ");
scanf("%d", &k);

printf("Enter value to insert: ");
scanf("%d", &value);


for(i = n; i > k; i--) {
arr[i] = arr[i - 1];
}

arr[k] = value;
n++;

printf("Array after insertion: ");
for(i = 0; i < n; i++) {
printf("%d ", arr[i]);
}

return 0;
}
