#include<stdio.h>


 int main()
 {
     int arr[100],n,i,j,checked[100],count,totaldup=0;
     printf("Enter the size of array: ");
     scanf("%d",&n);
     printf("Enter %d unique integers:\n",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
          checked[i];
     }

     for(i=0;i<n;i++)
     {  if(checked[i]==1)
         {continue;}
        count=1;



            for(j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                    {count++;
                    checked[j]=1;}
            }
            if(count>1)
            { totaldup++;
            }

         }

        if(totaldup==0)
            printf("None");
        else
            printf("Total num of duplicate found in array: %d",totaldup);
 }
