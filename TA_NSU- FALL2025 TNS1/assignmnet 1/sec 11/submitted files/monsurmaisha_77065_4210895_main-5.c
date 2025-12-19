#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Unique elements: ");
    for(int i=0; i<n; i++) {
        int cnt = 0;
        for(int j=0; j<n; j++)
            if(arr[i] == arr[j])
                cnt++;

        if(cnt == 1)
            printf("%d ", arr[i]);
    }


    return 0;
}
