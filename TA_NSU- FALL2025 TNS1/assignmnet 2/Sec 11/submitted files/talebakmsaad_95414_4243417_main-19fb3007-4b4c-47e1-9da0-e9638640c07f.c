#include <stdio.h>
#include <string.h>

struct Book_info {
    int id;
    char name[50];
    char author[50];
    int year;
    float price;
};

int main(){
    struct Book_info b[100];
    int n;

    FILE *fp = fopen("input.txt", "w");

    printf("Enter number of books: ");

    scanf("%d", &n);

    for (int i = 0; i <n;i++){

        scanf("%d %s %s %d %f",

              &b[i].id, b[i].name, b[i].author,
              &b[i].year, &b[i].price);

        fprintf(fp, "%d %s %s %d %.2f\n",
                b[i].id, b[i].name, b[i].author,
                b[i].year, b[i].price);
    }
    fclose(fp);

    fp = fopen("input.txt", "r");
    printf("\nBooks in store:\n");

    while (fscanf(fp, "%d %s %s %d %f",
                  &b[0].id, b[0].name, b[0].author,
                  &b[0].year, &b[0].price) != EOF){

        printf("ID: %d Name: %s Author: %s\n",
               b[0].id, b[0].name, b[0].author);
    }
    fclose(fp);

    fp = fopen("input.txt", "r");
    FILE *fd = fopen("dickens.txt", "w");
    FILE *fnd = fopen("not_dickens.txt", "w");

    while (fscanf(fp, "%d %s %s %d %f",
                  &b[0].id, b[0].name, b[0].author,

                  &b[0].year, &b[0].price) != EOF){

        if (strcmp(b[0].author, "Charles_Dickens") ==0)
            fprintf(fd, "%s\n", b[0].name);
        else
            fprintf(fnd, "%s\n", b[0].name);
    }

    fclose(fp);
    fclose(fd);
    fclose(fnd);

    return 0;
}

