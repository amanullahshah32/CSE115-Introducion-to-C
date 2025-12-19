#include <stdio.h>

int main() {
int X[100], n, newVal;

printf("Enter n: ");
scanf("%d", &n);

printf("Enter %d elements: ", n);
for (int i = 0; i < n; i++)
scanf("%d", &X[i]);

printf("Enter element to insert after first %d elements: ", n);
scanf("%d", &newVal);

X[n] = newVal;
n++;

printf("Array now: ");
for (int i = 0; i < n; i++)
printf("%d ", X[i]);

return 0;
}