#include<stdio.h>
void Replace(char arr[], char oldChar, char newChar);
int main()
{
   char ch[100],old_ch,new_ch;
   printf("Enter a sentence: ");
   gets(ch);
   int i = 0;
    printf("Enter the character to replace: ");
    scanf(" %c",&old_ch);
    fflush(stdin);
  printf("Enter the new character: ");
    scanf(" %c",&new_ch);
    Replace(ch, old_ch, new_ch);

    return 0;

}
void Replace(char arr[], char oldChar, char newChar)
{
    int i=0;
    while (arr[i]!='\0')
    {
        if (arr[i]==oldChar)
        arr[i]=newChar;
        i++;
    }
    printf("Final result: %s",arr);
}
