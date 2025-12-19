// Property of Imtiaz 2512169

#include <stdio.h>
#include <string.h>

void replace(char arr[], char oldChar, char newChar)
{
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i] == oldChar)
        {
            arr[i] = newChar;
        }
    }
}

int main() 
{
    char arr[100];
    char oldChar, newChar;
    printf("Enter the string (no spaces): ");
    scanf("%s", arr);
    
    printf("Enter the target: ");
    scanf(" %c", &oldChar);
    
    printf("Replace with: ");
    scanf(" %c", &newChar);
    
    replace(arr, oldChar, newChar);
    
    printf("%s", arr);

    return 0;
}

// Property of Imtiaz 2512169
