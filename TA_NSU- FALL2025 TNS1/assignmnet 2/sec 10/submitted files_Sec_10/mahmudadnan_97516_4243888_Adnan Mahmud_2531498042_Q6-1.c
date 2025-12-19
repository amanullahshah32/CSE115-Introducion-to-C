#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_BOOKS 100
#define MAX_STR 200

typedef struct
{
    char name[MAX_STR];
    int id;
    int publish_year;
    char author[MAX_STR];
    double price;

} Book_info;
static void trim_newline(char *s)
{
    size_t l = strlen(s);
    if (l == 0)
        return;
    if (s[l - 1] == '\n')
        s[l - 1] = '\0';
}
static int equals_author_ci(const char *a, const char *b)
{
    char ta[MAX_STR], tb[MAX_STR];
    size_t i;

    strncpy(ta, a, MAX_STR - 1);
    ta[MAX_STR - 1] = '\0';
    strncpy(tb, b, MAX_STR - 1);
    tb[MAX_STR - 1] = '\0';

    trim_newline(ta);
    trim_newline(tb);

    for (i = 0; ta[i]; ++i)
        ta[i] = (char)tolower((unsigned char)ta[i]);
    for (i = 0; tb[i]; ++i)
        tb[i] = (char)tolower((unsigned char)tb[i]);

    char *pa = ta;
    while (*pa && isspace((unsigned char)*pa))
        ++pa;
    char *pb = tb;
    while (*pb && isspace((unsigned char)*pb))
        ++pb;

    char *ea = pa + strlen(pa) - 1;
    while (ea >= pa && isspace((unsigned char)*ea))
    {
        *ea = '\0';
        --ea;
    }
    char *eb = pb + strlen(pb) - 1;
    while (eb >= pb && isspace((unsigned char)*eb))
    {
        *eb = '\0';
        --eb;
    }
    return strcmp(pa, pb) == 0;
}
int main(void)
{
    Book_info books[MAX_BOOKS];
    int n;

    printf("Enter number of books to populate (max %d): ", MAX_BOOKS);
    if (scanf("%d", &n) != 1)
    {
        fprintf(stderr, "Invalid number.\n");
        return 1;
    }
    if (n < 0 || n > MAX_BOOKS)
    {
        fprintf(stderr, "Number must be between 0 and %d.\n", MAX_BOOKS);
        return 1;
    }

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
    }

    for (int i = 0; i < n; ++i)
    {
        char buf[MAX_STR];

        printf("\nBook %d details:\n", i + 1);

        printf("  Name: ");
        if (!fgets(books[i].name, sizeof books[i].name, stdin))
        {
            books[i].name[0] = '\0';
        }
        trim_newline(books[i].name);

        printf("  Id (integer): ");
        if (!fgets(buf, sizeof buf, stdin))
            buf[0] = '\0';
        books[i].id = atoi(buf);

        printf("  Publish year (integer): ");
        if (!fgets(buf, sizeof buf, stdin))
            buf[0] = '\0';
        books[i].publish_year = atoi(buf);

        printf("  Author: ");
        if (!fgets(books[i].author, sizeof books[i].author, stdin))
        {
            books[i].author[0] = '\0';
        }
        trim_newline(books[i].author);

        printf("  Present price (e.g. 12.50): ");
        if (!fgets(buf, sizeof buf, stdin))
            buf[0] = '\0';
        books[i].price = atof(buf);
    }

    FILE *fp = fopen("input.txt", "w");
    if (!fp)
    {
        perror("Failed to open input.txt for writing");
        return 1;
    }

    for (int i = 0; i < n; ++i)
    {
        fprintf(fp, "%s\n", books[i].name);
        fprintf(fp, "%d\n", books[i].id);
        fprintf(fp, "%d\n", books[i].publish_year);
        fprintf(fp, "%s\n", books[i].author);
        fprintf(fp, "%.2f\n", books[i].price);
    }
    fclose(fp);
    printf("\nSaved %d records to input.txt\n", n);

    fp = fopen("input.txt", "r");
    if (!fp)
    {
        perror("Failed to open input.txt for reading");
        return 1;
    }

    printf("\nBooks read from input.txt (Name | Author | Id):\n");
    char line[MAX_STR];
    int count = 0;

    Book_info read_books[MAX_BOOKS];

    while (1)
    {
        /* read name */
        if (!fgets(line, sizeof line, fp))
            break;
        trim_newline(line);
        strncpy(read_books[count].name, line, MAX_STR - 1);
        read_books[count].name[MAX_STR - 1] = '\0';

        /* id */
        if (!fgets(line, sizeof line, fp))
            break;
        trim_newline(line);
        read_books[count].id = atoi(line);

        /* publish_year */
        if (!fgets(line, sizeof line, fp))
            break;
        trim_newline(line);
        read_books[count].publish_year = atoi(line);

        /* author */
        if (!fgets(line, sizeof line, fp))
            break;
        trim_newline(line);
        strncpy(read_books[count].author, line, MAX_STR - 1);
        read_books[count].author[MAX_STR - 1] = '\0';

        /* price */
        if (!fgets(line, sizeof line, fp))
            break;
        trim_newline(line);
        read_books[count].price = atof(line);

        /* display required fields */
        printf("  %s | %s | %d\n", read_books[count].name, read_books[count].author, read_books[count].id);

        ++count;
        if (count >= MAX_BOOKS)
            break;
    }
    fclose(fp);

    FILE *fp_charles = fopen("charles_dickens.txt", "w");
    FILE *fp_not_charles = fopen("not_charles_dickens.txt", "w");
    if (!fp_charles || !fp_not_charles)
    {
        perror("Failed to open output files");
        if (fp_charles)
            fclose(fp_charles);
        if (fp_not_charles)
            fclose(fp_not_charles);
        return 1;
    }

    const char target[] = "Charles Dickens";
    int count_by = 0, count_not_by = 0;
    for (int i = 0; i < count; ++i)
    {
        if (equals_author_ci(read_books[i].author, target))
        {
            fprintf(fp_charles, "%s\n", read_books[i].name);
            ++count_by;
        }
        else
        {
            fprintf(fp_not_charles, "%s\n", read_books[i].name);
            ++count_not_by;
        }
    }

    fclose(fp_charles);
    fclose(fp_not_charles);

    printf("\nCreated files:\n");
    printf("  charles_dickens.txt -> %d book name(s) by \"%s\"\n", count_by, target);
    printf("  not_charles_dickens.txt -> %d book name(s) not by \"%s\"\n", count_not_by, target);

    printf("\nDone.\n");
    return 0;
}