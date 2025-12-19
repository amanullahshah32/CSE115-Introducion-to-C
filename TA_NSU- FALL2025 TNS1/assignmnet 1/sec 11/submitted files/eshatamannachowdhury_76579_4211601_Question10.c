#include<stdio.h>
void Replace(char arr[], char oldChar, char newChar);

int main()
{
    char a[100], o, n;
    printf("Enter a string : ");
    gets(a);

    printf("Enter old character : ");
    scanf(" %c",&o);
    printf("Enter new character : ");
    scanf(" %c",&n);
    printf("\nModified string is : ");

    Replace(a,o,n);

    puts(a);
}

void Replace(char arr[], char oldChar, char newChar )
{
    for(int i =0 ; arr[i]!='\0'; i++)
    {
        if(arr[i]==oldChar)
            arr[i] = newChar;
    }
}
