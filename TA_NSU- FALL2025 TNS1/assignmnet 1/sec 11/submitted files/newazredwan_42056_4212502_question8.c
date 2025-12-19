#include <stdio.h>

void RevArr(int arr[], int size) {
int l = 0, r = size - 1;
while (l < r) {
int t = arr[l];
arr[l] = arr[r];
arr[r] = t;
l++; r--;
}
}

int main() {
int n, arr[100];

printf("Enter size: ");
scanf("%d", &n);

printf("Enter elements: ");
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);

RevArr(arr, n);

printf("Reversed array: ");
for (int i = 0; i < n; i++)
printf("%d ", arr[i]);

return 0;
}