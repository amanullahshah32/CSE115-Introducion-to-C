                            //  TASK 01
/*
#include <stdio.h>

int max(int *p, int size) {
    int maxVal = *p;
    for(int i = 1; i < size; i++) {
        if(*(p + i) > maxVal)
            maxVal = *(p + i);
    }
    return maxVal;
}

int main() {
    int arr[100], n;
    printf("Enter size: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Max = %d\n", max(arr, n));
    return 0;
}
 */

                            //  TASK 02
/*
#include <stdio.h>

void sortAscending(int *p, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(*(p+i) > *(p+j)) {
                int temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
}

int main() {
    int arr[100], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sortAscending(arr, n);

    printf("Sorted: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
*/

                            //  TASK 03

// (a)
/*
int findlength(char s[]) {
    int len = 0;
    while(s[len] != '\0')
        len++;
    return len;
}*/

// (b)
/*
int findlength_ptr(char *s) {
    int len = 0;
    while(*(s + len) != '\0')
        len++;
    return len;
}*/

                            //  TASK 04

// (a)
/*
void rev_arr(int arr1[], int rev_arr1[], int size) {
    for(int i = 0; i < size; i++)
        rev_arr1[i] = arr1[size - 1 - i];
}*/

// (b)
/*
void rev_arr_ptr(int *arr1, int *rev_arr1, int size) {
    for(int i = 0; i < size; i++)
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
}*/

                            //  TASK 05

/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    int diagSum = 0, borderSum = 0;
    int maxRow = 0, maxCol = 0;

    for(int i = 0; i < n; i++)
        diagSum += arr[i][i];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
                borderSum += arr[i][j];
        }
    }

    printf("Sum of main diagonal element: %d\n", diagSum);
    printf("Sum of border element: %d\n", borderSum);

    for(int i = 0; i < n; i++) {
        int rowSum = 0;
        for(int j = 0; j < n; j++)
            rowSum += arr[i][j];

        printf("Row%d sum: %d\n", i, rowSum);

        if(rowSum > maxRow)
            maxRow = rowSum;
    }

    printf("Maximum row sum: %d\n", maxRow);

    for(int j = 0; j < n; j++) {
        int colSum = 0;
        for(int i = 0; i < n; i++)
            colSum += arr[i][j];

        printf("Column%d sum: %d\n", j, colSum);

        if(colSum > maxCol)
            maxCol = colSum;
    }

    printf("Maximum column sum: %d\n", maxCol);

    printf("Upper Right Triangle:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j >= i) printf("%d ", arr[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    printf("Lower Right Triangle:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j >= i) printf("%d ", arr[j][i]);
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}
*/

                            //  TASK 06

/*
#include <stdio.h>
#include <string.h>

struct Book_info {
    char name[100];
    char author[100];
    int id;
    int year;
    float price;
};

int main() {
    struct Book_info books[100];
    int n;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Book %d Name: ", i+1);
        getchar();
        fgets(books[i].name, 100, stdin);
        books[i].name[strcspn(books[i].name, "\n")] = '\0';

        printf("Author: ");
        fgets(books[i].author, 100, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("ID: ");
        scanf("%d", &books[i].id);

        printf("Publish year: ");
        scanf("%d", &books[i].year);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    FILE *fp = fopen("input.txt", "w");
    for(int i = 0; i < n; i++)
        fprintf(fp, "%s,%s,%d,%d,%.2f\n", books[i].name, books[i].author,
                books[i].id, books[i].year, books[i].price);
    fclose(fp);

    fp = fopen("input.txt", "r");
    printf("\nAll Books:\n");
    char name[100], author[100];
    int id, year;
    float price;

    FILE *fpDickens = fopen("dickens.txt", "w");
    FILE *fpOthers = fopen("not_dickens.txt", "w");

    while(fscanf(fp, "%[^,],%[^,],%d,%d,%f\n",
                 name, author, &id, &year, &price) != EOF) {

        printf("Name: %s | Author: %s | ID: %d\n", name, author, id);

        if(strcmp(author, "Charles Dickens") == 0)
            fprintf(fpDickens, "%s\n", name);
        else
            fprintf(fpOthers, "%s\n", name);
    }

    fclose(fp);
    fclose(fpDickens);
    fclose(fpOthers);

    return 0;
}*/

