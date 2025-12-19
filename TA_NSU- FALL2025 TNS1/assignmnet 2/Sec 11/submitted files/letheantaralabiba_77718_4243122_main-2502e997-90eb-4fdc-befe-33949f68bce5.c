#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    int year;
    float price;
};

int main() {
    struct Book b;
    int n;

    FILE *fp = fopen("input.txt","w");
    printf("Enter number of books: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        printf("Enter id name author year price:\n");
        scanf("%d %s %s %d %f",
              &b.id, b.name, b.author, &b.year, &b.price);
        fprintf(fp,"%d %s %s %d %.2f\n",
                b.id,b.name,b.author,b.year,b.price);
    }
    fclose(fp);

    fp = fopen("input.txt","r");
    printf("\nBooks in record:\n");
    while(fscanf(fp,"%d %s %s %d %f",
        &b.id,b.name,b.author,&b.year,&b.price)!=EOF)
        printf("%d %s %s\n",b.id,b.name,b.author);
    fclose(fp);

    return 0;
}
