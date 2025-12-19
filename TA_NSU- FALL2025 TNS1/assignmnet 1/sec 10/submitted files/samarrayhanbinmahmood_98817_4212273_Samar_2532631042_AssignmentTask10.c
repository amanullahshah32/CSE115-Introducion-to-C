#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar)
{
    for(int i = 0; arr[i] != '\0'; i++)
        if(arr[i] == oldChar)
            arr[i] = newChar;
}

int main()
{
    char str[100], oldC, newC;


printf("Enter string: ");
    gets(str);

    printf("Enter old char: ");
    scanf("%c", &oldC);



printf("Enter new char: ");
    scanf(" %c", &newC);


    Replace(str, oldC, newC);

         printf("Modified string: %s\n", str);

    return 0;
}
