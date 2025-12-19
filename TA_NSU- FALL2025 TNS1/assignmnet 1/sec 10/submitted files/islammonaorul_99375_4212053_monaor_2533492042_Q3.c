#include<stdio.h>

int main(){
    int n, k;
    printf("Input size : ");
    scanf("%d", &n);
    printf("Enter elements : \n");
    int arr[n], n2;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the index (k-(0-%d)) : ", n);
    scanf("%d", &k);

    int arr2[n - k];

    for(int i=k; i<n; i++){
        arr2[i - k] = arr[i];
    }
    printf("Enter the value : ");
    scanf("%d", &n2);
    arr[k]=n2;
    int arr3[n+1];
    for(int i=0; i<=k; i++){
        arr3[i]=arr[i];
    }
    for(int i=k+1; i<=n; i++){
        arr3[i]=arr2[i - (k+1)];
    }
    printf("Current array : \n");
    for(int i=0; i<n+1; i++){
        printf("%d\n", arr3[i]);
    }

    return 0;
}
