 #include <stdio.h>
 #include <stdlib.h>

 int main()

    {
    int n, k, newValue;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);
    scanf("%d", &newValue);

    if(k >= 0 && k < n)
        arr[k] = newValue;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}






