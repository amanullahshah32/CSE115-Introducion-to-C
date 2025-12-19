#include<stdio.h>
#include<string.h>

struct book_info
{
    char name[50];
    int id;
    int year;
    char author[50];
    float price;
};
int main()
{
    int n, i;
    printf("enter number of books: ");
    scanf("%d", &n);
    struct book_info book[100];

    for(i=0; i<n; i++)
    {
        getchar();
        printf("book name: ");
        gets(book[i].name);
        printf("ID: ");
        scanf("%d", &book[i].id);
        printf("year: ");
        scanf("%d", &book[i].year);
        getchar();
        printf("author name: ");
        gets(book[i].author);
        printf("price: ");
        scanf("%f", &book[i].price);
    }

    FILE *fp= fopen("input.txt","w");
    for(i=0; i<n; i++)
    {
        fprintf(fp, "%s, %d, %d, %s, %f\n",book[i].name,book[i].id,book[i].year, book[i].author,book[i].price);
    }
    fclose(fp);

    fp= fopen("input.txt", "r");
    struct book_info b;
    printf("\nBooks in record: \n");
    while(fscanf(fp, "%s, %d, %d, %s, %f\n", b.name, &b.id, &b.year, b.author, &b.price)==5)
        printf("Name: %s, Author: %s, ID: %d\n", b.name, b.author, b.id);
    fclose(fp);

    fp= fopen("input.txt", "r");
    FILE *fpDickens= fopen("dickens.txt", "w");
    FILE *fpNotDickens= fopen("not_dickens.txt", "w");
    while(fscanf(fp,"%s, %d, %d, %s, %f\n", b.name, &b.id, &b.year, b.author, &b.price)==5)
    {
        if(strcmp(b.author, "Charles Dickens")==0)
            fprintf(fpDickens, "%s\n", b.name);
        else
            fprintf(fpNotDickens, "%s\n", b.name);
    }

    fclose(fp);
    fclose(fpDickens);
    fclose(fpNotDickens);

    return 0;

}
