# include<stdio.h>

int max(int *p, int size){

int i;
int maxval= *p;
for(i=0;i<size;i++)
{
    if(*(p+1)>maxval)
        maxval=*(p+1);
}

return maxval;
}
void main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter values in array:\n");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The max value in the array is: %d", max(a,n));
}

