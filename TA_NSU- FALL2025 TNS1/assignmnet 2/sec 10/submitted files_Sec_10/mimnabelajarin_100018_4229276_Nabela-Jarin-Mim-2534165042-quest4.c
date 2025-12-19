#include <stdio.h>
  // (a) Reverse array using normal array notation

void rev_arr(int arr1[], int rev_arr1[], int size) {
    for(int i = 0; i < size; i++) 
    { rev_arr1[i] = arr1[size - 1 - i];}
}
   //(b) Reverse array using pointers
void rev_arr_ptr(int *arr1, int *rev_arr1, int size) {
    for(int i = 0; i < size; i++) 
    {*(rev_arr1 + i) = *(arr1 + (size - 1 - i)); }
}
int main() {
    int n;
   printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n], rev1[n], rev2[n];
   printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
     { scanf("%d", arr + i); }

    // Calling (a) version
    rev_arr(arr, rev1, n);

    // Calling (b) version
    rev_arr_ptr(arr, rev2, n);

    printf("Reversed array (using array notation): ");
    for(int i = 0; i < n; i++)
        printf("%d ", rev1[i]);

    printf("\nReversed array (using pointer notation): ");
    for(int i = 0; i < n; i++)
        printf("%d ", rev2[i]);

    printf("\n");

    return 0;
}
