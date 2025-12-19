// Md. Rizuan Al Masud Raeen
// 2212398642
// Assignment 02
// Question 06

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book_info
{
    char name[100];
    int id;
    int publish_year;
    char author[100];
    float price;

};

int main()
{

    struct Book_info books[100];
    int n;

    printf("Enter number of books (max 100): ");
    scanf("%d", &n);
    while(getchar() != '\n');

    for(int i = 0; i < n; i++)
    {
        printf("Enter book %d name: ", i + 1);
        fgets(books[i].name, 100, stdin);
        books[i].name[strcspn(books[i].name, "\n")] = '\0';

        printf("Enter book %d author: ", i + 1);
        fgets(books[i].author, 100, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("Enter book %d ID: ", i + 1);
        scanf("%d", &books[i].id);
        while(getchar() != '\n');

        printf("Enter book %d publish year: ", i + 1);
        scanf("%d", &books[i].publish_year);
        while(getchar() !='\n');

        printf("Enter book %d price: ", i + 1);
        scanf("%f", &books[i].price);
        while(getchar()!= '\n');
    }

    FILE *fp = fopen("input.txt", "w");
    for(int i=0; i<n; i++)
    {
        fprintf(fp, "%s|%s|%d|%d|%.2f\n",
                books[i].name,
                books[i].author,
                books[i].id,
                books[i].publish_year,
                books[i].price);
    }
    fclose(fp);

    fp = fopen("input.txt", "r");
    printf("\nBooks in record system:\n");
    char line[300];
    while(fgets(line, sizeof(line), fp))
    {
        char name[100], author[100];
        int id, year;
        float price;

        sscanf(line, "%[^|]|%[^|]|%d|%d|%f",
               name, author, &id, &year, &price);

        printf("Name: %s, Author: %s, ID: %d\n", name, author, id);
    }
    fclose(fp);

    fp = fopen("input.txt", "r");
    FILE *fdick = fopen("dickens.txt", "w");
    FILE *fothers = fopen("others.txt", "w");

    while(fgets(line, sizeof(line), fp))
    {
        char name[100], author[100];
        int id, year;
        float price;

        sscanf(line, "%[^|]|%[^|]|%d|%d|%f",
               name, author, &id, &year, &price);

        if(strcmp(author, "Charles Dickens") == 0)
            fprintf(fdick, "%s\n", name);
        else
            fprintf(fothers, "%s\n", name);
    }

    fclose(fp);
    fclose(fdick);
    fclose(fothers);

    printf("\nSuccessfully created dickens.txt and others.txt\n");

    return 0;
}



/* 6. Write a full code that will contain all the following measures. Suppose, you are running a
book shop. You can have a maximum of 100 books there. Design a structure name Book_info to
store all the books’ Name, Id, publish year, author, present price and any other information that
is needed. Take input from user on the number of books that must be existent in the record
system initially.
a)Populate the record system.
b)Save the information in a file input.txt
c)Read information from the file input.txt and display the name of books, author and Id of all
books available in the record system.
d)Read information from file input.txt and create a new file that will contain book names written
by the author Charles Dickens
e)Read information from file input.txt and create a new file that will contain book names not
written by the author Charles Dickens */
