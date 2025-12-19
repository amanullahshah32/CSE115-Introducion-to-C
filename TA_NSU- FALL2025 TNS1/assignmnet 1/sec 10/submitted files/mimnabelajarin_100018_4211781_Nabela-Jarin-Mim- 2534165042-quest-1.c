#include<stdio.h>
int main()
{
    int n,i,k;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter %d unique integers:\n",n);
    int arr[n];
     for (i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
     printf("Enter index k to modify: ");
     scanf("%d",&k);

     if(k>=0&&k<n){
     printf("Enter value:");
     scanf("%d",&arr[k]);
     printf("Array after modification:\n");
     for (i=0;i<n;i++){
     printf("%d\n",arr[i]);
     }}
     else
     {printf("Index is out of range");}
    return 0;
}
