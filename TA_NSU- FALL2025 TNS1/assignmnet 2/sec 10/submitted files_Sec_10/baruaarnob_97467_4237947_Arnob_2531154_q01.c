#include<stdio.h>

int max(int *p, int size){
    int i, m;

    m = *p;
    for(i = 1; i < size; i++){
        if(*(p + i) > m){
            m = *(p + i);
        }
    }

    return m;
}

int main(){
    int arr[100];
    int n, i, result;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    result = max(arr, n);

    printf("Largest element = %d", result);

    return 0;
}
