#include <stdio.h>

int main() {
    int arr[100], n, dupCount=0;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    for(int i=0; i<n; i++) {
        int count=0;
        for(int j=0; j<n; j++) if(arr[i]==arr[j]) count++;
        if(count>1) dupCount++;
    }

    printf("Total number of duplicate elements: %d\n", dupCount/2);
    return 0;
}

