#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
Write a C program to count the total number of duplicate (more than once) element in
an array of integers.
    */

    int n, arr[100];

    printf("Input the number of elements: ");
    scanf("%d", &n);

    printf("Input elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int duplicateCount = 0;

    for(int i = 0; i < n; i++){
        int count = 0;

        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count > 1){
            duplicateCount++;


            for(int k = i + 1; k < n; k++){
                if(arr[k] == arr[i]){
                    arr[k] = -999999;
                }
            }
        }
    }

    printf("Total number of duplicate elements found: %d", duplicateCount);

    return 0;
}
