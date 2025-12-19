#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar){
    for(int i=0; arr[i]!='\0'; i++)
        if(arr[i] == oldChar)
            arr[i] = newChar;
}

int main(){
    char str[100], o, n;
    gets(str);

    scanf("%c %c",&o,&n);

    Replace(str,o,n);

    printf("Modified string: %s", str);
}
