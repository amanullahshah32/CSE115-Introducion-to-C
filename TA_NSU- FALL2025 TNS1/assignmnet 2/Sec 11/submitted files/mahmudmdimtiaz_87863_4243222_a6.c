// Property of Imtiaz 2512169

#include <stdio.h>
#include <string.h>

struct Book
{
    int ID;
    char name[100];
    char author[50];
    char publisher[50];
};

void populateRecords(struct Book books[], int n)
{
    printf("\nEnter information of %d books:\n", n);
    for(int i = 0; i < n; i++)
    {
        books[i].ID = i + 1;
        
        printf("\nBook %d\n", i+1);
        printf("Name: ");
        fgets(books[i].name, 100, stdin);
        books[i].name[strcspn(books[i].name, "\n")] = 0;
        
        printf("Author: ");
        fgets(books[i].author, 50, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;
        
        printf("Publisher: ");
        fgets(books[i].publisher, 50, stdin);
        books[i].publisher[strcspn(books[i].publisher, "\n")] = 0;
    }
}

void saveToFile(struct Book books[], int n)
{
    FILE *fp = fopen("input.txt", "w");
    
    for(int i = 0; i < n; i++)
    {
        fprintf(fp, "%d\n%s\n%s\n%s\n", 
                books[i].ID, books[i].name, books[i].author, books[i].publisher);
    }
    
    fclose(fp);
}

void displayFromFile()
{
    FILE *fp = fopen("input.txt", "r");
    
    int id;
    char name[100];
    char author[50];
    char publisher[50];
    
    printf("\nAll books from input.txt:\n");
    while(fscanf(fp, "%d", &id) == 1)
    {
        fgetc(fp);
        fgets(name, 100, fp);
        name[strcspn(name, "\n")] = 0;
        fgets(author, 50, fp);
        author[strcspn(author, "\n")] = 0;
        fgets(publisher, 50, fp);
        publisher[strcspn(publisher, "\n")] = 0;
        
        printf("ID: %d, Name: %s, Author: %s, Publisher: %s\n", 
               id, name, author, publisher);
    }
    
    fclose(fp);
}

void booksByCharlesDickens()
{
    FILE *fp = fopen("input.txt", "r");
    FILE *out = fopen("Charles_Dickens.txt", "w");
    
    int id;
    char name[100];
    char author[50];
    char publisher[50];
    
    while(fscanf(fp, "%d", &id) == 1)
    {
        fgetc(fp);
        fgets(name, 100, fp);
        name[strcspn(name, "\n")] = 0;
        fgets(author, 50, fp);
        author[strcspn(author, "\n")] = 0;
        fgets(publisher, 50, fp);
        
        if(strcmp(author, "Charles Dickens") == 0)
        {
            fprintf(out, "%s\n", name);
        }
    }
    
    fclose(fp);
    fclose(out);
}

void booksNotByCharlesDickens()
{
    FILE *fp = fopen("input.txt", "r");
    FILE *out = fopen("Not_Charles_Dickens.txt", "w");
    
    int id;
    char name[100];
    char author[50];
    char publisher[50];
    
    while(fscanf(fp, "%d", &id) == 1)
    {
        fgetc(fp);
        fgets(name, 100, fp);
        name[strcspn(name, "\n")] = 0;
        fgets(author, 50, fp);
        author[strcspn(author, "\n")] = 0;
        fgets(publisher, 50, fp);
        
        if(strcmp(author, "Charles Dickens") != 0)
        {
            fprintf(out, "%s\n", name);
        }
    }
    
    fclose(fp);
    fclose(out);
}

int main()
{
    int n;
    struct Book books[100];
    
    printf("Enter number of books: ");
    scanf("%d", &n);
    
    getchar(); 
    
    populateRecords(books, n);
    saveToFile(books, n);
    displayFromFile();
    booksByCharlesDickens();
    booksNotByCharlesDickens();
    
    return 0;
}

// Property of Imtiaz 2512169
