#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n], duplicate = 0;
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<n; i++) {
        int cnt = 0;
        for(int j=0; j<n; j++)
            if(arr[i] == arr[j])
                cnt++;

        if(cnt > 1) {
            duplicate++;
            for(int k=i+1; k<n; k++)
                if(arr[k] == arr[i])
                    arr[k] = -999999;
        }
    }

    printf("Total duplicate elements: %d", duplicate);


    return 0;
}
