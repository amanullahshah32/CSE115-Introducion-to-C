#include <stdio.h>

int main(){
    char s[200], out[200];
    gets(s);

    int j=0;
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>='A'&&s[i]<='Z') || (s[i]>='a'&&s[i]<='z'))
            out[j++] = s[i];
    }
    out[j]='\0';

    printf("%s", out);
}
