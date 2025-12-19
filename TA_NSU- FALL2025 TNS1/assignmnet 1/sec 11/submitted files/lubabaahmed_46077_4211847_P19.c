
#include <stdio.h>

void stringrev(char arr[]) {
    int length = 0;
    int i, j;
    char temp;


    while (arr[length] != '\0') {
        length++;
    }


    i = 0;
    j = length - 1;

    while (i < j) {

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main() {
    char str[100];


    printf("Enter a string: ");
    fgets(str, 100, stdin);


    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }


    printf("Original string: %s\n", str);


    stringrev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
