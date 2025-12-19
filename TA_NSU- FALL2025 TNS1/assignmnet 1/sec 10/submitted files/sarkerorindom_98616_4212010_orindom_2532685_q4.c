#include <stdio.h>

int main() {
int X[100];
int n, i, newvalue;

printf("Enter number of elements n: ");
scanf("%d", &n);

printf("Enter %d elements: ", n);
for(i = 0; i < n; i++) {
scanf("%d", &X[i]);
}

printf("Enter element to add after the first n elements: ");
scanf("%d", &newvalue);

X[n] = newvalue;
n++;

printf("Updated array: ");
for(i = 0; i < n; i++) {
printf("%d ", X[i]);
}

return 0;
}
