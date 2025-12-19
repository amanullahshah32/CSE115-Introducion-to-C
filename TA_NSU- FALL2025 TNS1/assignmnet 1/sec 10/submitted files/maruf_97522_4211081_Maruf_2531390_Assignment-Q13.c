#include<stdio.h>
int main(){
   int i,j,n=0;
   char arr[100];
   printf("Enter a string:");
   gets(arr);
   int isp=1;
   for(i=0;arr[i]!='\0';i++){
        n++;
   }
   for(i=0,j=n-1;i<n/2;i++,j--){
       if(arr[i]!=arr[j]) {
           isp=0;
           break;
       }
   }
   if(isp) printf("This string is a Palindrome.");
   else    printf("This string is not a Palindrome.");
}


