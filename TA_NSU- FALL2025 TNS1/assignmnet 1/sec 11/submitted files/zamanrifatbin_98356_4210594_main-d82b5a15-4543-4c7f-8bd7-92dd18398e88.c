#include <stdio.h>
#include <stdlib.h>


    int main()
   {
    int n, dup = 0;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++)
            if(arr[i] == arr[j]) count++;

        if(count > 1) dup++;
    }

    dup /= 2;
    printf("Total number of duplicate element found in array: %d", dup);
    return 0;
}

