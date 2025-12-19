#include <stdio.h>

int main() {
    int arr[100], n, k, newVal;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("Enter index to modify: ");
    scanf("%d", &k);
    printf("Enter new value: ");
    scanf("%d", &newVal);

    if(k>=0 && k<n) arr[k] = newVal;

    printf("Modified array:\n");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
