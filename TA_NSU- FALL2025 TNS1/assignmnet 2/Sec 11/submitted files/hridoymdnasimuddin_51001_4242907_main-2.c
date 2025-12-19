
/*#include <stdio.h>

// Function to find largest element using pointer
int max(int *p, int size) {
    int largest = *p;

    for(int i = 1; i < size; i++) {
        if(*(p + i) > largest) {
            largest = *(p + i);
        }
    }

    return largest;
}

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function using pointer to array
    int result = max(arr, n);
    printf("Largest element is: %d\n", result);

    return 0;
}*/


//question 2
/*#include <stdio.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort using pointers (Bubble Sort - simple)
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {

            if(*(arr + j) > *(arr + j + 1)) {

                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }

    printf("Array in ascending order: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}*/


//Question 3
/*#include <stdio.h>

// Function 1: Using array notation
int findlength(char s[]) {
    int length = 0;

    while(s[length] != '\0') {
        length++;
    }

    return length;
}

// Function 2: Using pointer notation
int findlength2(char *s) {
    int length = 0;

    while(*(s + length) != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    // Using array notation
    int len1 = findlength(str);
    printf("Length using array notation: %d\n", len1);

    // Using pointer notation
    int len2 = findlength2(str);
    printf("Length using pointer notation: %d\n", len2);

    return 0;
}*/


//question 4

/*#include <stdio.h>

// Function 1: Using array notation
void rev_arr(int arr1[], int rev_arr1[], int size) {
    for(int i = 0; i < size; i++) {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

// Function 2: Using pointer notation
void rev_arr2(int *arr1, int *rev_arr1, int size) {
    for(int i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n], rev1[n], rev2[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Using array notation function
    rev_arr(arr, rev1, n);
    printf("Reversed using array notation: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", rev1[i]);
    }
    printf("\n");

    // Using pointer notation function
    rev_arr2(arr, rev2, n);
    printf("Reversed using pointer notation: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", rev2[i]);
    }
    printf("\n");

    return 0;
}*/


//question 5
/*#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    // Take input
    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n===== Results =====\n");

    // a) Sum of main diagonal elements
    int diag_sum = 0;
    int min_size = (rows < cols) ? rows : cols;
    for(int i = 0; i < min_size; i++) {
        diag_sum += arr[i][i];
    }
    printf("Sum of main diagonal elements: %d\n", diag_sum);

    // b) Sum of border elements
    int border_sum = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            // Check if element is on border
            if(i == 0 || i == rows-1 || j == 0 || j == cols-1) {
                border_sum += arr[i][j];
            }
        }
    }
    printf("Sum of border elements: %d\n", border_sum);

    // c) Maximum row sum
    int max_row_sum = 0;
    for(int i = 0; i < rows; i++) {
        int row_sum = 0;
        for(int j = 0; j < cols; j++) {
            row_sum += arr[i][j];
        }
        printf("Row %d sum: %d\n", i, row_sum);

        if(row_sum > max_row_sum) {
            max_row_sum = row_sum;
        }
    }
    printf("Maximum row sum: %d\n", max_row_sum);

    // d) Maximum column sum
    int max_col_sum = 0;
    for(int j = 0; j < cols; j++) {
        int col_sum = 0;
        for(int i = 0; i < rows; i++) {
            col_sum += arr[i][j];
        }
        printf("Column %d sum: %d\n", j, col_sum);

        if(col_sum > max_col_sum) {
            max_col_sum = col_sum;
        }
    }
    printf("Maximum column sum: %d\n", max_col_sum);

    // e) Display upper right triangle
    printf("\nUpper right triangle:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j >= i) {
                printf("%d\t", arr[i][j]);
            } else {
                printf(" \t");
            }
        }
        printf("\n");
    }

    // f) Display lower right triangle
    printf("\nLower right triangle:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {

            if(i + j >= rows - 1) {
                printf("%d\t", arr[i][j]);
            } else {
                printf(" \t");
            }
        }
        printf("\n");
    }

    return 0;
}*/


//question 6
/*#include <stdio.h>
#include <string.h>

// Structure definition
struct Book_info {
    char name[100];
    int id;
    int publish_year;
    char author[50];
    float price;
    char isbn[20];
};

int main() {
    int num_books;

    printf("Enter number of books (max 100): ");
    scanf("%d", &num_books);

    // Clear input buffer
    while(getchar() != '\n');

    if(num_books > 100 || num_books < 1) {
        printf("Invalid number of books. Using default: 3\n");
        num_books = 3;
    }

    struct Book_info books[num_books];

    // a) Populate the record system
    printf("\n=== Enter Book Information ===\n");
    for(int i = 0; i < num_books; i++) {
        printf("\nBook %d:\n", i+1);

        printf("Name: ");
        fgets(books[i].name, sizeof(books[i].name), stdin);
        books[i].name[strcspn(books[i].name, "\n")] = '\0';

        printf("ID: ");
        scanf("%d", &books[i].id);

        printf("Publish Year: ");
        scanf("%d", &books[i].publish_year);

        while(getchar() != '\n');  // Clear buffer

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("Price: ");
        scanf("%f", &books[i].price);

        while(getchar() != '\n');  // Clear buffer

        printf("ISBN: ");
        fgets(books[i].isbn, sizeof(books[i].isbn), stdin);
        books[i].isbn[strcspn(books[i].isbn, "\n")] = '\0';
    }

    // b) Save information to file input.txt
    FILE *file = fopen("input.txt", "w");
    if(file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    for(int i = 0; i < num_books; i++) {
        fprintf(file, "%s|%d|%d|%s|%.2f|%s\n",
                books[i].name, books[i].id, books[i].publish_year,
                books[i].author, books[i].price, books[i].isbn);
    }
    fclose(file);
    printf("\nBook information saved to 'input.txt'\n");

    // c) Read from file and display name, author, and ID
    printf("\n=== All Books in Record System ===\n");
    file = fopen("input.txt", "r");
    if(file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[300];
    printf("\n%-30s %-20s %-10s\n", "Book Name", "Author", "ID");
    printf("----------------------------------------------------------\n");

    while(fgets(line, sizeof(line), file)) {
        // Parse the line
        char name[100], author[50], isbn[20];
        int id, year;
        float price;

        sscanf(line, "%[^|]|%d|%d|%[^|]|%f|%[^\n]",
               name, &id, &year, author, &price, isbn);

        printf("%-30s %-20s %-10d\n", name, author, id);
    }
    fclose(file);

    // d) Create file with books by Charles Dickens
    file = fopen("input.txt", "r");
    FILE *dickens_file = fopen("dickens_books.txt", "w");

    printf("\n=== Creating file for Charles Dickens' books ===\n");

    while(fgets(line, sizeof(line), file)) {
        char name[100], author[50], isbn[20];
        int id, year;
        float price;

        sscanf(line, "%[^|]|%d|%d|%[^|]|%f|%[^\n]",
               name, &id, &year, author, &price, isbn);

        // Check if author is Charles Dickens (case insensitive)
        if(strstr(author, "Charles Dickens") != NULL ||
           strstr(author, "charles dickens") != NULL) {
            fprintf(dickens_file, "%s\n", name);
            printf("Added to dickens_books.txt: %s\n", name);
        }
    }
    fclose(file);
    fclose(dickens_file);

    // e) Create file with books NOT by Charles Dickens
    file = fopen("input.txt", "r");
    FILE *non_dickens_file = fopen("non_dickens_books.txt", "w");

    printf("\n=== Creating file for non-Charles Dickens' books ===\n");

    while(fgets(line, sizeof(line), file)) {
        char name[100], author[50], isbn[20];
        int id, year;
        float price;

        sscanf(line, "%[^|]|%d|%d|%[^|]|%f|%[^\n]",
               name, &id, &year, author, &price, isbn);

        // Check if author is NOT Charles Dickens
        if(strstr(author, "Charles Dickens") == NULL &&
           strstr(author, "charles dickens") == NULL) {
            fprintf(non_dickens_file, "%s\n", name);
            printf("Added to non_dickens_books.txt: %s\n", name);
        }
    }
    fclose(file);
    fclose(non_dickens_file);

    printf("\n=== All operations completed successfully ===\n");
    printf("Files created:\n");
    printf("1. input.txt (all books)\n");
    printf("2. dickens_books.txt (books by Charles Dickens)\n");
    printf("3. non_dickens_books.txt (books not by Charles Dickens)\n");

    return 0;
}*/
