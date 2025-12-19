#include <stdio.h>

int main() {
int arr[100];
int n, i, j, totald = 0;

printf("Input the number of elements to be stored in array: ");
scanf("%d", &n);

printf("Input elements are: ");
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
for(i = 0; i < n; i++) {

for(j = 0; j < i; j++) {
if(arr[i] == arr[j]) {
totald++;
break;
}
}
}

printf("Total number of duplicate element found in array: %d\n", totald);

return 0;
}
