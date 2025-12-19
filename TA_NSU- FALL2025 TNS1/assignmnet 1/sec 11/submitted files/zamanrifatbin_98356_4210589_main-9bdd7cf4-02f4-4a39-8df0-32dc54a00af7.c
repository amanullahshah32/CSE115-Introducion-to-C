#include <stdio.h>
#include <stdlib.h>


    int main()

    {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)

    scanf("%d", &arr[i]);

    scanf("%d", &k);

    if(k >= 0 && k < n) {
    for(int i = k; i < n-1; i++)
    arr[i] = arr[i+1];
    n--;
    }

    for(int i = 0; i < n; i++)

    printf("%d ", arr[i]);
    return 0;
}



