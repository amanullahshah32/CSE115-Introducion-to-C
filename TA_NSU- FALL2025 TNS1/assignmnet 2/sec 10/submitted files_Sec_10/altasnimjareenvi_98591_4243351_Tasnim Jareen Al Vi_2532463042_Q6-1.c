#include <stdio.h>
#include <string.h>

typedef struct
{
    char Name[50];
    int ID;
    int pyear;
    char author[50];
}Book_info;

int main()
{
    Book_info b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", b[i].Name);
        scanf("%d", &b[i].ID);
        scanf("%d", &b[i].pyear);
        scanf("%s", b[i].author);
    }
    FILE *fp = fopen("input.txt", "w");
    for (i = 0; i < n; i++)
        fprintf(fp, "%s %d %d %s\n", b[i].Name, b[i].ID, b[i].pyear, b[i].author);
    fclose(fp);
    
    fp = fopen("input.txt", "r");
    while (fscanf(fp, "%s %d %d %s", b[0].Name, &b[0].ID, &b[0].pyear, b[0].author) != EOF)
        printf("%s %s %d\n", b[0].Name, b[0].author, b[0].ID);
    fclose(fp);

    fp = fopen("input.txt", "r");
    FILE *fd = fopen("dickens.txt", "w");
    FILE *fnd = fopen("notdickens.txt", "w");

    while (fscanf(fp, "%s %d %d %d", b[0].Name, &b[0].ID, &b[0].pyear, &b[0].author) != EOF)
    {
        if (strcmp(b[0].author, "Charles_Dickens") == 0)
            fprintf(fd, "%s\n", b[0].Name);
        else
            fprintf(fnd, "%s\n", b[0].Name);
    }

    fclose(fp);
    fclose(fd);
    fclose(fnd);

    return 0;
}