#include <stdio.h>

void count(char arr[]) {
    int vowels = 0, consonants = 0;
    int i = 0;

    while (arr[i] != '\0') {
        char ch = arr[i];


        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }


            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}

int main() {
    char str[100];

    printf("Enter string: ");
    fgets(str, 100, stdin);


    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    count(str);

    return 0;
}
