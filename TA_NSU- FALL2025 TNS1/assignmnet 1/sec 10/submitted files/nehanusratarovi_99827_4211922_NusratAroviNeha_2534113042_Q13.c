#include<stdio.h>

int main()
{
    char arr[500];
   
    int i=0,length=0,flag=0; 
    

     printf("Enter the string:");
    gets(arr);

    for(i=0;arr[i]!='\0';i++)
    {
        length++;
    }

    for(i=0;i<length/2;i++)
    

    {
        if(arr[i]!=arr[length-1-i])
        {
            flag=1;
            break;
            
        }
    }
    
    if(flag==0)  printf("Palindrome string");

    else  printf("Not Palindrome string");

    return 0;
}