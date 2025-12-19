#include <stdio.h>
int main() {
    int n, i, k;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
    printf("Unique elements are:\n");
   for(i=0;i<n;i++){
        for(k = 0;k <n;k++){
            if(i!=k&&arr[i]==arr[k])
            break;}
        if(k==n)
            {printf("%d ", arr[i]);
    }}

    return 0;
}
