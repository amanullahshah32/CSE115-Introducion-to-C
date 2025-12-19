#include <stdio.h>
#include <stdlib.h>

//11) Write a C program to remove all characters in a string except the alphabets. Sample Input Strintg: corona2_update1ne$ws.co3m Expected Output: coronaupdatenewscom

void removeNonAlpha(char s[])
{
    int i,j=0;
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
            s[j]=s[i];
            j++;
        }
    }
    s[j]='\0';
}

int main()
{
    char str[200];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    removeNonAlpha(str);
    printf("Output: %s",str);

return 0;
}
