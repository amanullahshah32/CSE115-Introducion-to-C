#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float a[n],sum=0;
for(int i=0;i<n;i++)
    {
    scanf("%f",&a[i]);
    sum+=a[i];
}
float avg=sum/n;
printf("Average=%f ",avg);
for(int i=0;i<n;i++)
    if(a[i]>avg)
    printf("%f ",a[i]);
return 0;
}

