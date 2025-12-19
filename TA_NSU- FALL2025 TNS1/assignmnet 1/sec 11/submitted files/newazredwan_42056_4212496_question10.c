#include <stdio.h>

void Replace(char arr[], char oldC, char newC) {
for (int i = 0; arr[i] != '\0'; i++)
if (arr[i] == oldC)
arr[i] = newC;
}

int main() {
char str[200], oldC, newC;

printf("Enter string: ");
fgets(str, sizeof(str), stdin);

printf("Old character: ");
scanf("%c", &oldC);

printf("New character: ");
scanf(" %c", &newC);

Replace(str, oldC, newC);

printf("Modified string: %s", str);

return 0;
}
