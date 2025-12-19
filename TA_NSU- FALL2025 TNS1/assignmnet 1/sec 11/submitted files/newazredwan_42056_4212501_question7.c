#include <stdio.h>

int main() {
int n, arr[100], counted[100] = {0}, duplicates = 0;

printf("Enter number of elements: ");
scanf("%d", &n);

printf("Enter elements: ");
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);

for (int i = 0; i < n; i++) {
if (counted[i])
continue;

int freq = 1;
for (int j = i + 1; j < n; j++) {
if (arr[i] == arr[j]) {
freq++;
counted[j] = 1;
}
}

if (freq > 1)
duplicates++;
}

printf("Total duplicate elements: %d", duplicates);

return 0;
}
