#include <stdio.h>
#include <stdlib.h>


{
  int max(int *p, int size) {
    int largest = *p;
    for(int i = 1; i < size; i++) {
        if(*(p + i) > largest)
            largest = *(p + i);
    }
    return largest;
}

int main() {
    int arr[] = {5, 9, 3, 12, 7};
    int size = 5;

    printf("Largest element = %d", max(arr, size));
    return 0;
}


---
    return 0;
}
