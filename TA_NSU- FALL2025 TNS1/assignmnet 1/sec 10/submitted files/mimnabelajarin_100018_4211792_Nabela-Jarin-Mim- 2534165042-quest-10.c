#include <stdio.h>
void Replace(char arr[], char oldChar, char newChar){
    for(int i=0; arr[i] != '\0'; i++){
        if(arr[i]==oldChar)
            arr[i]=newChar;}
}
int main(){
    char str[100],oldc, newc;
    printf("Enter string: ");
    gets(str);
    printf("Enter char to replace: ");
    scanf("%c",&oldc);
    printf("Enter new char: ");
    scanf(" %c",&newc);
    Replace(str,oldc,newc);
    printf("Modified string: %s\n",str);

    return 0;
}
