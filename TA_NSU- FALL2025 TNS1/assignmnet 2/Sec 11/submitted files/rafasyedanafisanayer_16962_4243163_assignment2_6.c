
#include <stdio.h>
#include <string.h>

struct Book_info {
    int id;
    char name[50];
    char author[50];
};

int main() {
    struct Book_info b[100];
    int n, i;
    FILE *fp, *fd, *fnd;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &b[i].id);

        getchar();
        printf("Name: ");
        gets(b[i].name);

        printf("Author: ");
        gets(b[i].author);
    }


    fp = fopen("input.txt", "w"); /* save to input.txt */
    for(i = 0; i < n; i++) {
        fprintf(fp, "%d %s %s\n", b[i].id, b[i].name, b[i].author);
    }
    fclose(fp);


    fp = fopen("input.txt", "r"); /* display from file */
    printf("\nBooks in record system:\n");
    for(i = 0; i < n; i++) {
        fscanf(fp, "%d %s %s", &b[i].id, b[i].name, b[i].author);
        printf("ID: %d Name: %s Author: %s\n",
               b[i].id, b[i].name, b[i].author);
    }
    fclose(fp);

    /* create two files */
    fp = fopen("input.txt", "r");
    fd = fopen("dickens.txt", "w");
    fnd = fopen("not_dickens.txt", "w");

    for(i = 0; i < n; i++) {
        fscanf(fp, "%d %s %s", &b[i].id, b[i].name, b[i].author);

        if(strcmp(b[i].author, "Charles_Dickens") == 0)
            fprintf(fd, "%s\n", b[i].name);
        else
            fprintf(fnd, "%s\n", b[i].name);
    }

    fclose(fp);
    fclose(fd);
    fclose(fnd);

    return 0;
}
