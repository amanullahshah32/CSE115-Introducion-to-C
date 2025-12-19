#include <stdio.h>

int main() {
char str[200], out[200];
int j = 0;

printf("Enter string: ");
fgets(str, sizeof(str), stdin);

for (int i = 0; str[i] != '\0'; i++)
if ((str[i] >= 'A' && str[i] <= 'Z') ||
(str[i] >= 'a' && str[i] <= 'z'))
out[j++] = str[i];

out[j] = '\0';

printf("Output: %s", out);
return 0;
}