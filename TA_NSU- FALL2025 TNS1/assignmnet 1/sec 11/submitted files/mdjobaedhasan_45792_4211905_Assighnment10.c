#include <stdio.h>

    void Replace(char arr[], char oldChar, char newChar) {
        for(int i = 0; arr[i] != '\0'; i++)
            {
            if(arr[i] == oldChar)
                arr[i] = newChar;
            }
}

    int main()
     {
        char str[200], oldC, newC;

            printf("Enter a string : ");
            gets(str);

            printf("Enter character to replace : ");
            scanf("%c", &oldC);

    getchar();

        printf("Enter a new character: ");
        scanf("%c", &newC);

        Replace(str, oldC, newC);

        printf("Modified string: %s", str);

    return 0;
}
