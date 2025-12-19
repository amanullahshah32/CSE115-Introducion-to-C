#include <stdio.h>

int main() {
    int n, arr[1000];

    printf("Enter array size");
    scanf("%d", &n);

    printf("Enter %d integers", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Unique elements are here  ");

    for(int i = 0; i < n; i++) {
        int count = 0;


        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }


        if(count == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}

