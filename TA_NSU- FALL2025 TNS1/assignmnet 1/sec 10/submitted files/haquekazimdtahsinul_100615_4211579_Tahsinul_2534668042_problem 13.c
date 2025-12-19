#include <stdio.h>
int main()
{
    char str[100];
    int length=0;
    printf("Enter a string:");
    scanf("%s",str);
    while(str[length]!='\0')
    {
        length++;
    }
    int isPalindrome=1;
    for(int i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-1-i])
        {
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome)
    {
        printf("'%s' is a palindrome\n",str);
    } else {
        printf("'%s' is NOT a palindrome\n",str);
    }
    return 0;
}
