#include <stdio.h>
#include <string.h>

struct Book
{
    char name[50];
    char author[50];
    int id;
    int year;
    float price;
};

int main()
{
    FILE *fp, *fd, *fo;
    struct Book b;

    fp = fopen("input.txt", "r");
    fd = fopen("dickens.txt", "w");
    fo = fopen("others.txt", "w");

    if (fp == NULL || fd == NULL || fo == NULL)
    {
        printf("File error\n");
        return 1;
    }

    while (fscanf(fp, "%s %s %d %d %f",
                  b.name,
                  b.author,
                  &b.id,
                  &b.year,
                  &b.price) == 5)
    {
        if (strcmp(b.author, "Charles_Dickens") == 0)
            fprintf(fd, "%s\n", b.name);
        else
            fprintf(fo, "%s\n", b.name);
    }

    fclose(fp);
    fclose(fd);
    fclose(fo);

    return 0;
}
