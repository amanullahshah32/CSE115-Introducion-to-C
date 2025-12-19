#include <stdio.h>
#include <string.h>

// Struct definition [cite: 10]
struct Book_info {
    char name[100];
    int id;
    int pub_year;
    char author[100];
    float price;
};

int main() {
    struct Book_info books[100]; // Max 100 books [cite: 9]
    int n, i;
    FILE *fptr;

    // Take input on number of books [cite: 11]
    printf("Enter number of books to record: ");
    scanf("%d", &n);
    getchar(); // consume newline

    // a) Populate the record system [cite: 12]
    for(i = 0; i < n; i++) {
        printf("\nEnter details for Book %d\n", i+1);
        printf("Name: ");
        gets(books[i].name);
        printf("ID: ");
        scanf("%d", &books[i].id);
        printf("Publish Year: ");
        scanf("%d", &books[i].pub_year);
        getchar(); // consume newline
        printf("Author: ");
        gets(books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar(); // consume newline
    }

    // b) Save to input.txt [cite: 12]
    fptr = fopen("input.txt", "w");
    if(fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Writing raw data to file to be read later
    for(i = 0; i < n; i++) {
        fprintf(fptr, "%s|%d|%d|%s|%.2f\n", books[i].name, books[i].id, books[i].pub_year, books[i].author, books[i].price);
    }
    fclose(fptr);

    // c) Read from input.txt and display Name, Author, ID [cite: 12]
    printf("\n--- Reading from input.txt ---\n");
    fptr = fopen("input.txt", "r");
    char line[256];
    struct Book_info tempBook;

    // We will re-read data into a temporary struct to simulate reading from file completely
    while(fscanf(fptr, "%[^|]|%d|%d|%[^|]|%f\n", tempBook.name, &tempBook.id, &tempBook.pub_year, tempBook.author, &tempBook.price) != EOF) {
        printf("Name: %s, Author: %s, ID: %d\n", tempBook.name, tempBook.author, tempBook.id);
    }
    rewind(fptr); // Go back to start of file for next steps

    // d) & e) Create specific files based on Author [cite: 13]
    FILE *dickensPtr = fopen("charles_dickens.txt", "w");
    FILE *othersPtr = fopen("others.txt", "w");

    while(fscanf(fptr, "%[^|]|%d|%d|%[^|]|%f\n", tempBook.name, &tempBook.id, &tempBook.pub_year, tempBook.author, &tempBook.price) != EOF) {
        // Check if author is Charles Dickens
        if(strcmp(tempBook.author, "Charles Dickens") == 0) {
            fprintf(dickensPtr, "%s\n", tempBook.name);
        } else {
            fprintf(othersPtr, "%s\n", tempBook.name);
        }
    }

    printf("\nFiles 'charles_dickens.txt' and 'others.txt' have been created.\n");

    fclose(fptr);
    fclose(dickensPtr);
    fclose(othersPtr);

    return 0;
}
