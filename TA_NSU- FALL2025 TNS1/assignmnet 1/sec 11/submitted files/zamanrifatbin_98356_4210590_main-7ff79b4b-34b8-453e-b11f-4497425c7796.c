#include <stdio.h>
#include <stdlib.h>



   int main()
   {
    int n, k, val;
    scanf("%d", &n);

    int arr[n+1];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    scanf("%d %d", &k, &val);

    if(k >= 0 && k <= n) {
        for(int i = n; i > k; i--)
            arr[i] = arr[i-1];
        arr[k] = val;
        n++;
    }

    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}



