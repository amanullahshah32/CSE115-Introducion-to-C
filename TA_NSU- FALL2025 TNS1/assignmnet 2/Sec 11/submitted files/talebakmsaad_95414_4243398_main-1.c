#include <stdio.h>

int max(int *p, int size){

    int maximum = *p ;
    for (int i = 1; i< size; i++){
        if (*(p + i) >maximum)

            maximum = *(p + i);
    }
    return maximum;
}

int main(){
    int arr[] = {5, 12, 3, 25, 7};
    int size = 5;

    printf("Maximum value: %d\n", max(arr, size));

    return 0;
}
