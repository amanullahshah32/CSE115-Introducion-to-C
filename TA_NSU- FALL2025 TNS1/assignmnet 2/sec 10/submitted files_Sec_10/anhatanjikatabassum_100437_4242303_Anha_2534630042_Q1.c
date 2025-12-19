#include<stdio.h>
int max (int *p,int size);
int main()
{
    int i,n,k;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    k=max(arr,n);
    printf("Largest Number:%d",k);
    return 0;


}
int max(int *p,int size)
{
    int i,max;
    max=*p;
    for(i=1;i<size;i++)
    {
        if(*(p+i)>max)
            max=*(p+i);
    }
    return max;
}
