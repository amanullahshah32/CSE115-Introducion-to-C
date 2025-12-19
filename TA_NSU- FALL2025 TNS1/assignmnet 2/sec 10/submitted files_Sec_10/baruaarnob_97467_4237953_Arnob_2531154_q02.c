#include<stdio.h>

int main(){
    int arr[100];
    int n, i, j, temp;
    int *p;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    p = arr;

    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(*(p + i) > *(p + j)){
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("Array in ascending order:\n");
    for(i = 0; i < n; i++){
        printf("%d ", *(p + i));
    }

    return 0;
}
