#include <stdio.h>
#include <string.h>
#define MAX 100

// Structure to store book information
struct Book_info
{
    char name[100];
    char author[50];
    int id;
    int publish_year;
    float price;
};

int main()
{
    struct Book_info books[MAX];
    int n,i;
    FILE *fp;

    // a) Populate the record system
    printf("Enter number of books to add (max 100): ");
    scanf("%d",&n);
    getchar();

    for(i=0;i<n;i++)
    {
        printf("\nBook %d\n",i + 1);

        printf("Enter Book Name: ");
        fgets(books[i].name,100,stdin);
        books[i].name[strcspn(books[i].name, "\n")]='\0';

        printf("Enter Author Name: ");
        fgets(books[i].author,50,stdin);
        books[i].author[strcspn(books[i].author, "\n")]='\0';

        printf("Enter Book ID: ");
        scanf("%d",&books[i].id);

        printf("Enter Publish Year: ");
        scanf("%d",&books[i].publish_year);

        printf("Enter Price: ");
        scanf("%f",&books[i].price);
        getchar();
    }

    // b) Save information in a file input.txt
    fp=fopen("input.txt", "w");
    if(fp==NULL)
    {
        printf("Cannot open file!\n");
        return 1;
    }
    for(i=0;i<n;i++)
    {
        fprintf(fp, "%s|%s|%d|%d|%.2f\n", books[i].name, books[i].author, books[i].id, books[i].publish_year, books[i].price);
    }
    fclose(fp);

    // c) Read information from file and display Name, Author, ID
    printf("\nBooks in the record system:\n");
    fp=fopen("input.txt", "r");
    if(fp==NULL)
    {
        printf("Cannot open file!\n");
        return 1;
    }
    char line[200];
    while(fgets(line,sizeof(line),fp))
    {
        char name[100],author[50];
        int id;
        sscanf(line, "%[^|]|%[^|]|%d|%*d|%*f", name, author, &id);
        printf("ID: %d, Name: %s, Author: %s\n", id, name, author);
    }
    fclose(fp);

    // d) Books by Charles Dickens
    FILE *fpCharles=fopen("Charles_Dickens.txt", "w");
    if(fpCharles==NULL)
    {
        printf("Cannot create file!\n");
        return 1;
    }
    fp=fopen("input.txt", "r");
    while(fgets(line, sizeof(line), fp))
    {
        char name[100],author[50];
        sscanf(line, "%[^|]|%[^|]|%*d|%*d|%*f", name, author);
        if(strcmp(author, "Charles Dickens") == 0)
        {
            fprintf(fpCharles, "%s\n", name);
        }
    }
    fclose(fpCharles);

    // e) Books NOT by Charles Dickens
    FILE *fpNotCharles=fopen("Not_Charles_Dickens.txt", "w");
    if(fpNotCharles==NULL)
    {
        printf("Cannot create file!\n");
        return 1;
    }
    fp=fopen("input.txt", "r");
    while(fgets(line, sizeof(line), fp))
    {
        char name[100], author[50];
        sscanf(line, "%[^|]|%[^|]|%*d|%*d|%*f", name, author);
        if(strcmp(author, "Charles Dickens") != 0)
        {
            fprintf(fpNotCharles, "%s\n", name);
        }
    }
    fclose(fpNotCharles);
    fclose(fp);

    printf("\nFiles created:\n- Charles_Dickens.txt\n- Not_Charles_Dickens.txt\n");

    return 0;
}
