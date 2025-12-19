#include<stdio.h>
int main()
{
    int n,i,j,count=0,freq=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
           b[i]=0;
        }
for(i=0;i<n;i++)
    {
        if(b[i]==1)
            continue;
    freq=1 ;
     for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                freq++;
                b[j]=1;// mark duplicate positions as visited
            }
        }

        if(freq>1)
           count++; // this element occurs more than once
}
 printf("Total number of duplicate: %d\n", count);
return 0;
  }



