
//Sanzana Afrin Tonny
//2231370042


#include <stdio.h>
void replace(char arr[], char oldChar, char newChar);

int main() {
    char str[100];
    char old, new;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to be replaced: ");
    scanf(" %c", &old);
    printf("Enter the new character: ");
    scanf(" %c", &new);
    replace(str, old, new);
    printf("Modified string: %s", str);
    return 0;
}

void replace(char arr[], char old, char new) {
    int i = 0;
    while (arr[i] != '\0') {
        if (arr[i] == old) {
            arr[i] = new;
        }
        i++;
    }
}
