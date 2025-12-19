#include<stdio.h>
void Replace(char arr[],char oldChar,char newChar)
{
  int i=0;
  while(arr[i]!='\0')
  {
    if(arr[i]==oldChar)
    {
        arr[i]=newChar;
    }
    i++;
  }
}

int main()
{
    char str[100];
    char oldChar,newChar;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    printf("Enter character to replace:");
    scanf(" %c", &oldChar);
    printf("Enter new character:");
    scanf(" %c", &newChar);
    Replace(str,oldChar,newChar);
    printf("Modified string: %s\n",str);
    return 0;

}