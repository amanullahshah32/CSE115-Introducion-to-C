#include <stdio.h>
#include <string.h>

struct Book_info
{
    int id;
    char name[50];
    char author[50];
    int publish_year;
    float price;
};

int main()
{
    struct Book_info b;
    FILE *fp1, *fp2;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("not_dickens.txt", "w");

    while(fscanf(fp1, "%d %s %s %d %f", &b.id, b.name, b.author, &b.publish_year, &b.price) != EOF)
    {
        if(strcmp(b.author, "Charles Dickens") != 0)
        {
            fprintf(fp2, "%s\n", b.name);
        }
    }
    fclose(fp1);
    fclose(fp2);
    printf("File not_dickens.txt created.\n");
    return 0;
}
