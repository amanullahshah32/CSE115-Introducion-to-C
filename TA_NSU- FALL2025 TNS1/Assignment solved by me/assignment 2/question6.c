#include <stdio.h>
#include <string.h>

/* 1. Define the Structure */
struct Book_info {
    char Name[50];
    int Id;
    int year;
    char Author[50];
    float Price;
};

int main() {
    /* Variables */
    struct Book_info b; /* Variable to hold book data */
    int n, i;

    /* File Pointers */
    FILE *fp_in;        /* Points to input.txt */
    FILE *fp_dickens;   /* Points to the Charles Dickens file */
    FILE *fp_others;    /* Points to the Others file */

    /* --- PART A & B: Populate System & Save to File --- */
    printf("Enter the number of books to add: ");
    scanf("%d", &n);

    /* Open file in "w" mode (Write) */
    fp_in = fopen("input.txt", "w");

    if (fp_in == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

    printf("Enter details (Name ID Year Author Price).\n");
    printf("NOTE: Use underscores for spaces (e.g. Charles_Dickens)\n");

    for(i = 0; i < n; i++) {
        printf("Book %d: ", i + 1);
        /* Input from User */
        scanf("%s %d %d %s %f", b.Name, &b.Id, &b.year, b.Author, &b.Price);

        /* Write to File immediately */
        fprintf(fp_in, "%s %d %d %s %.2f\n", b.Name, b.Id, b.year, b.Author, b.Price);
    }

    /* Close the file to save data */
    fclose(fp_in);
    printf("Data saved to 'input.txt' successfully.\n\n");


    /* --- PART C: Read from File & Display --- */
    printf("--- Reading from Record System ---\n");

    /* Open file in "r" mode (Read) */
    fp_in = fopen("input.txt", "r");

    if (fp_in == NULL) {
        printf("Error: File not found.\n");
        return 1;
    }

    printf("Books currently in system:\n");
    /* Loop until End Of File (EOF) */
    while(fscanf(fp_in, "%s %d %d %s %f", b.Name, &b.Id, &b.year, b.Author, &b.Price) != EOF) {
        printf("ID: %d | Name: %s | Author: %s\n", b.Id, b.Name, b.Author);
    }

    fclose(fp_in);


    /* --- PART D & E: Separate Books by Author --- */
    fp_in = fopen("input.txt", "r");
    fp_dickens = fopen("dickens_books.txt", "w");
    fp_others = fopen("other_books.txt", "w");

    if (fp_in == NULL || fp_dickens == NULL || fp_others == NULL) {
        printf("Error opening files for filtering.\n");
        return 1;
    }

    while(fscanf(fp_in, "%s %d %d %s %f", b.Name, &b.Id, &b.year, b.Author, &b.Price) != EOF) {

        /* Check if Author is "Charles_Dickens" */
        if(strcmp(b.Author, "Charles_Dickens") == 0) {
            fprintf(fp_dickens, "%s\n", b.Name);
        } else {
            fprintf(fp_others, "%s\n", b.Name);
        }
    }

    printf("\nFiltering Complete.\n");
    printf("Created 'dickens_books.txt' and 'other_books.txt'.\n");

    /* Close ALL files */
    fclose(fp_in);
    fclose(fp_dickens);
    fclose(fp_others);

    return 0;
}
