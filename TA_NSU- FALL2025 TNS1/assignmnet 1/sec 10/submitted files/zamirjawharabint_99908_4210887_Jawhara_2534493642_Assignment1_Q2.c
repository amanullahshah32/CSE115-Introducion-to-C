#include <stdio.h>

int main(){

    int arr[50];
    int i, num, k;

    printf("Enter array size: ");
        scanf("%d", &num);
    printf("Enter array: \n");
        for(i=0; i<num; i++)
        scanf("%d", &arr[i]);


printf("Index of element to delete: ");
    scanf("%d", &k);

    for(i=k; i<num-1; i++)
        arr[i] = arr[i+1];
    num--;

    printf("Array after deleting the element at %d index : ", k);
    for(i=0;  i< num; i++)
        printf("%d", arr[i]);


return 0;
}
