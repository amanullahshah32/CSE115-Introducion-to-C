#include<stdio.h>


 int main()
 {
     int arr[100],n,i,j,found=0,count=0;
     printf("Enter the size of array: ");
     scanf("%d",&n);
     printf("Enter %d unique integers:\n",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     printf("The original integers:\n");
     for(i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }

         printf("\nThe unique elements are:\n");
         for(i=0;i<n;i++)
         {
            count=0;
            for(j=0;j<n;j++)
            {
                if(arr[i]==arr[j])
                    count++;
            }
            if(count==1)
            { printf("%d",arr[i]);
                found=1;

            }

         }
        if(found==0)
            printf("None");

}
