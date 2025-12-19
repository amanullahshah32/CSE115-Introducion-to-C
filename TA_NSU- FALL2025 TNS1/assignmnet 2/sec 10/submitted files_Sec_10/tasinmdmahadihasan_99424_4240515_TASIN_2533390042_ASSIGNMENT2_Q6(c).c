#include <stdio.h>

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
    FILE *fp;

    fp=fopen("input.txt", "r");

    printf("Book Name | Author | ID\n");
    printf("-------------------------\n");

    while(fscanf(fp, "%d %s %s %d %f",
                 &b.id, b.name, b.author,
                 &b.publish_year, &b.price) != EOF)
    {
        printf("%s | %s | %d\n", b.name, b.author, b.id);
    }
    fclose(fp);
    return 0;
}
