#include <stdio.h>

int main() {
    int n,k,newval,temp;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter integers: ");
    for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
    printf("Enter index to insert: ");
    scanf("%d", &k);
    if(k < 0 || k > n)
        {
        printf("Invalid index!");
        return 0;
        }
    else
    {
        for(int i=n; i>k; i--)
        {
            arr[i] = arr[i-1];
        }
        printf("Enter value to insert: ");
        scanf("%d", &newval);
        arr[k] = newval;
        n++;
        printf("Updated array: ");
        for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
        return 0;
    }

}
