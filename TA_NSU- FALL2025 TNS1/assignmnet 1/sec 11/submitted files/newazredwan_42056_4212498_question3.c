#include <stdio.h>

int main() {
int n, k, val, arr[100];

printf("Enter array size: ");
scanf("%d", &n);

printf("Enter elements: ");
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);

printf("Enter index k to insert at: ");
scanf("%d", &k);

if (k < 0 || k > n || n >= 100) {
printf("Invalid index.\n");
return 0;
}

printf("Enter value: ");
scanf("%d", &val);

for (int i = n; i > k; i--)
arr[i] = arr[i - 1];

arr[k] = val;
n++;

printf("Array after insertion: ");
for (int i = 0; i < n; i++)
printf("%d ", arr[i]);

return 0;
}