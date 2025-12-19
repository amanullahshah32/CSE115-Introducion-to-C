

int main() {
    char A[100], B[50];
    int i = 0, j = 0;

    printf("Enter first string: ");
    fgets(A, sizeof(A), stdin);

    printf("Enter second string: ");
    fgets(B, sizeof(B), stdin);
    while (A[i] != '\0') {
        if (A[i] == '\n') A[i] = '\0';
        i++;
    }
    while (B[j] != '\0') {
        if (B[j] == '\n') B[j] = '\0';
        j++;
    }
    j = 0;
    while (B[j] != '\0') {
        A[i] = B[j];
        i++;
        j++;
    }

    A[i] = '\0';

    printf("After %s\n", A);

    return 0;
}
