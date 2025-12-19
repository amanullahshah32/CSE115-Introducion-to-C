#include <stdio.h>
#include <string.h>

//6) Write a full code that will contain all the following measures. Suppose, you are running a book shop. You can have a maximum of 100 books there. Design a structure name Book_info to store all the books’ Name, Id, publish year, author, present price and any other information that is needed. Take input from user on the number of books that must be existent in the record system initially.
//a)Populate the record system.
//b)Save the information in a file input.txt
//c)Read information from the file input.txt and display the name of books, author and Id of all books available in the record system.
//d)Read information from file input.txt and create a new file that will contain book names written by the author Charles Dickens
//e)Read information from file input.txt and create a new file that will contain book names not written by the author Charles Dickens

struct Book_info
{
    char name[50];
    int id;
    int year;
    char author[50];
    float price;
};

int main()
{
    struct Book_info b[100];
    int n;
    int i;
    FILE *fp;
    FILE *fp1;
    FILE *fp2;

    printf("Enter number of books: ");
    scanf("%d", &n);

/* a) Populate the record system */
    for(i = 0; i < n; i++)
    {
        printf("Enter book name: ");
        scanf(" %[^\n]", b[i].name);

        printf("Enter book id: ");
        scanf("%d", &b[i].id);

        printf("Enter publish year: ");
        scanf("%d", &b[i].year);

        printf("Enter author name: ");
        scanf(" %[^\n]", b[i].author);

        printf("Enter price: ");
        scanf("%f", &b[i].price);
    }

/* b) Save information in input.txt */
    fp = fopen("input.txt", "w");

    for(i = 0; i < n; i++)
    {
        fprintf(fp, "%s\n", b[i].name);
        fprintf(fp, "%d\n", b[i].id);
        fprintf(fp, "%d\n", b[i].year);
        fprintf(fp, "%s\n", b[i].author);
        fprintf(fp, "%.2f\n", b[i].price);
    }

    fclose(fp);

/* c) Read from file and display name, author and id */
    fp = fopen("input.txt", "r");

    printf("\nBook Name | Author | ID\n");

    for(i = 0; i < n; i++)
    {
        fscanf(fp, " %[^\n]", b[i].name);
        fscanf(fp, "%d", &b[i].id);
        fscanf(fp, "%d", &b[i].year);
        fscanf(fp, " %[^\n]", b[i].author);
        fscanf(fp, "%f", &b[i].price);

        printf("%s | %s | %d\n", b[i].name, b[i].author, b[i].id);
    }

    fclose(fp);

/* d) Books written by Charles Dickens */
    fp = fopen("input.txt", "r");
    fp1 = fopen("charles_dickens.txt", "w");

    for(i = 0; i < n; i++)
    {
        fscanf(fp, " %[^\n]", b[i].name);
        fscanf(fp, "%d", &b[i].id);
        fscanf(fp, "%d", &b[i].year);
        fscanf(fp, " %[^\n]", b[i].author);
        fscanf(fp, "%f", &b[i].price);

        if(strcmp(b[i].author, "Charles Dickens") == 0)
        {
            fprintf(fp1, "%s\n", b[i].name);
        }
    }

    fclose(fp);
    fclose(fp1);

/* e) Books NOT written by Charles Dickens */
    fp = fopen("input.txt", "r");
    fp2 = fopen("not_charles_dickens.txt", "w");

    for(i = 0; i < n; i++)
    {
        fscanf(fp, " %[^\n]", b[i].name);
        fscanf(fp, "%d", &b[i].id);
        fscanf(fp, "%d", &b[i].year);
        fscanf(fp, " %[^\n]", b[i].author);
        fscanf(fp, "%f", &b[i].price);

        if(strcmp(b[i].author, "Charles Dickens") != 0)
        {
             fprintf(fp2, "%s\n", b[i].name);
        }
    }

    fclose(fp);
    fclose(fp2);

    printf("\nFiles created successfully.");

    return 0;
}
