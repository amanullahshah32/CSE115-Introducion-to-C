#include <stdio.h>

int main() {
    int arr[100], n, k, val;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("Enter index to insert: ");
    scanf("%d", &k);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    if(k>=0 && k<=n) {
        for(int i=n; i>k; i--) arr[i] = arr[i-1];
        arr[k] = val;
        n++;
    }

    printf("Array after insertion:\n");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
