#include <stdio.h>

int main() {
    int n, arr[100];

    printf("Input the number of elements ");
    scanf("%d", &n);

    printf("Input elements are ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int dupliCount = 0;

    for(int i = 0; i < n; i++) {
        int count = 1;


        int alreadyCounted = 0;
        for(int k = 0; k < i; k++) {
            if(arr[k] == arr[i]) {
                alreadyCounted = 1;
                break;
            }
        }
        if(alreadyCounted)
            continue;


        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > 1)
            dupliCount++;
    }

    printf("Total number of duplicate element found in array %d", dupliCount);

    return 0;
}

