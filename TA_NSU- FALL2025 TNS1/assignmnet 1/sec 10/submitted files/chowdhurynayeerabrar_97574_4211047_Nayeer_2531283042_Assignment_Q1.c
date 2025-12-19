#include <stdio.h>

int main() {
    int n,k,newval;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter integers: ");
    for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
    printf("Enter index to modify: ");
    scanf("%d", &k);
    if(k < 0 || k >= n)
        {
        printf("Invalid index!");
        return 0;
        }
    else
    {
        printf("Enter new value: ");
        scanf("%d", &newval);
        arr[k] = newval;
        printf("Updated array: ");
        for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
        return 0;
    }

}
