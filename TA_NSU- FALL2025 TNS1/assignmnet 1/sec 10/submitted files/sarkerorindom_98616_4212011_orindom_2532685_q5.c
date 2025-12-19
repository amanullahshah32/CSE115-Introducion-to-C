
#include <stdio.h>

int main() {
float arr[100];
float sum = 0.0, avg;
int n, i;

printf("Enter array size: ");
scanf("%d", &n);

printf("Enter elements: ");
for(i = 0; i < n; i++) {
scanf("%f", &arr[i]);
sum = sum + arr[i];
}

avg = sum / n;
printf("Average = %f\n", avg);

printf("The elements greater than average are: ");
for(i = 0; i < n; i++) {
if(arr[i] > avg) {
printf("%f ", arr[i]);
}
}

return 0;


}
