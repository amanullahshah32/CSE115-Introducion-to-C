#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book_info
{
    int id;
    char name[60];
    char author[60];
    float price;
};

int main()
{
    struct Book_info b[100];
    int n, i;
    FILE *fp;

    printf("GIVE THE number of books: ");
    scanf("%d", &n);
    getchar();


    for(i = 0; i < n; i++)
    {
        printf("Book %d ID: ", i+1);
        scanf("%d", &b[i].id);
        getchar();

        printf("The Name of the Book : ");
        gets(b[i].name);

        printf("Author name: ");
        gets(b[i].author);

        printf("Price of the Book : ");
        scanf("%f", &b[i].price);
    }


    fp = fopen("input.txt", "w");
    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        fprintf(fp, "%d\n%s\n%s\n%.2f\n", b[i].id, b[i].name, b[i].author, b[i].price);
    }
    fclose(fp);


    fp = fopen("input.txt", "r");
    printf("\nBooks in record:\n");

    for(i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &b[i].id);
        fgetc(fp);

        fgets(b[i].name, 60, fp);
        b[i].name[strcspn(b[i].name, "\n")] = 0;

        fgets(b[i].author, 60, fp);
        b[i].author[strcspn(b[i].author, "\n")] = 0;

        fscanf(fp, "%f", &b[i].price);
        fgetc(fp);

        printf("ID:%d Name:%s Author:%s\n", b[i].id, b[i].name, b[i].author);
    }
    fclose(fp);


    fp = fopen("Charles.txt", "w");
    for(i = 0; i < n; i++)
    {
        if(strcmp(b[i].author, "Charles Dickens") == 0)
        {
            fprintf(fp, "%s\n", b[i].name);
        }
    }
    fclose(fp);


    fp = fopen("Not_Charles.txt", "w");
    for(i = 0; i < n; i++)
    {
        if(strcmp(b[i].author, "Charles Dickens") != 0)
        {
            fprintf(fp, "%s\n", b[i].name);
        }
    }
    fclose(fp);

    printf("\nFiles generated successfully.\n");

    return 0;
}
