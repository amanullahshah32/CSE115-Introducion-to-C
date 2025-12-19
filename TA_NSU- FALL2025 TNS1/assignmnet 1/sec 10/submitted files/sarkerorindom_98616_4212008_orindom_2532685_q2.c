#include <stdio.h>

int main() {
    int arr[100];
    int n, i, k, val;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter all unique integer elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
printf("\n\n[Q2] Enter index k to delete: ");
scanf("%d", &k);


if (k >= 0 && k < n) {

    for(i = k; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
} else {
    printf("Invalid index for deletion!\n");
}

printf("remaining elements : ");
for(i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
    }
return 0;
}
