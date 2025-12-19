#include <stdio.h>
void sort_asc(int *p, int size) {
    int *end = p + size;
    for (int *i = p; i < end - 1; ++i) {
        int *min = i;
        for (int *j = i + 1; j < end; ++j) {
            if (*j < *min) min = j;
        }
        if (min != i) {
            int tmp = *i;
            *i = *min;
            *min = tmp;
        }
    }
}
int main() {
    int n;
    printf("Enter size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Before sorting: ");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sort_asc(arr, n);
    printf("After sorting:  ");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}