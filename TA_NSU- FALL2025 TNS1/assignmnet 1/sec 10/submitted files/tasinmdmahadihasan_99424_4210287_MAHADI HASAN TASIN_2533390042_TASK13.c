#include <stdio.h>
int main()
{
    char str[100];
    int i, j, length=0, flag=1;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++)
    {
        length++;
    }

    i=0;
    j=length-1;

    while(i<j)
    {
        if(str[i]!=str[j])
        {
            flag=0;
            break;
        }
        i++;
        j--;
    }

    if(flag==1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
