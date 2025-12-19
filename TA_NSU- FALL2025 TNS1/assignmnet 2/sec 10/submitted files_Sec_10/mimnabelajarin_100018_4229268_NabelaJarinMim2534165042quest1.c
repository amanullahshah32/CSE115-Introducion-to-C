#include <stdio.h>

int max(int *p, int size) {
    int maximum = *p; 

    for(int i = 1; i < size; i++) {
        if(*(p + i) > maximum) {
            maximum = *(p + i);}
    }
    return maximum;
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", arr + i);  
    }
    int largest = max(arr, n);
    printf("Largest element = %d\n", largest);

    return 0;
}
