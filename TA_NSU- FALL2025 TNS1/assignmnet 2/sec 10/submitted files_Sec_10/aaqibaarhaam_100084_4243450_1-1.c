#include <stdio.h>
int max (int *p, int size)
{
    int max=*p;
    for(int i=0;i<size;i++)
        if(*(p+i)>max)
            max=*(p+i);
    return max;
}
int main()
{
    printf("Enter size of array: "); int n; scanf("%d",&n);
    int arr[n];
    int *p=arr;//holds the base address &arr[0]
    for(int i=0;i<n;i++)
        scanf("%d",(p+i));
    int maxnum=max(arr,n);//arr is already a pointer, so base address is passed
    printf("\n\n\nMax is %d\n\n\n",maxnum);
    return 0;
}
//p is like house number
//*p is like person living in the house
