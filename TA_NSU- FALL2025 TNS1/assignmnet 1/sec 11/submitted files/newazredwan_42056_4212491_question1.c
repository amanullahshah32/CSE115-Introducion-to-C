#include <stdio.h>

int main() {
int n, k, newVal, arr[100];

printf("Enter array size: ");
scanf("%d", &n);

printf("Enter %d unique integers: ", n);
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);

printf("Enter index k to modify: ");
scanf("%d", &k);

if (k < 0 || k >= n) {
printf("Invalid index.\n");
return 0;
}

printf("Enter new value: ");
scanf("%d", &newVal);

arr[k] = newVal;

printf("Modified array: ");
for (int i = 0; i < n; i++)
printf("%d ", arr[i]);

return 0;
}