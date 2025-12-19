#include<stdio.h>


 int main()
 {
     int k,arr[100],n,i;
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
     printf("Enter the index you want to insert (0-%d): ",n);
     scanf("%d",&k);
     int newvalue;
     printf("Enter the new value: ");
     scanf("%d",&newvalue);
     if(k>=0&&k<=n)
     {
         for(i = n; i > k; i--) {
            arr[i] = arr[i - 1];
        }
        arr[k]=newvalue;
        n++;
         printf("The new array is:\n");
         for(i=0;i<n;i++)
         {
             printf("%d ",arr[i]);
         }
     }
     else
        printf("Invalid");
}

