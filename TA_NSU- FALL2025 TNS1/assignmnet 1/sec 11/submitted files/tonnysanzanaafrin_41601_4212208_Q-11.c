

//Sanzana Afrin Tonny
//2231370042

#include <stdio.h>
int main() {
    char str[150];
    int i, j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    printf("Output String: %s\n", str);
    return 0;
}
