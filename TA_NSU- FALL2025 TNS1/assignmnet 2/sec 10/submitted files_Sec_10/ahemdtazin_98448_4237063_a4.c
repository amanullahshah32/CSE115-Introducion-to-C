#include<stdio.h>

void rev_arr(int arr1[], int rev_arr1[], int size){
    int i, j = 0;

    for(i = size - 1; i >= 0; i--){
        rev_arr1[j] = arr1[i];
        j++;
    }
}

int main(){
    int arr1[100], rev_arr1[100];
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }

    rev_arr(arr1, rev_arr1, n);

    printf("Reversed array:\n");
    for(i = 0; i < n; i++){
        printf("%d ", rev_arr1[i]);
    }

    return 0;
}
