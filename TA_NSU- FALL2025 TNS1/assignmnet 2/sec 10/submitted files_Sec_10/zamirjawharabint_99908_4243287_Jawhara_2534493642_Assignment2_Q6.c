#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book_info {
   char book_name[100];
   int id;
   char author_name[100];
   int present_price;
   int publication_year;
};
int main() {
int number_book;
struct book_info b[100];
int input;
printf("Enter number of books you want to add: ");
scanf("%d", &number_book);
getchar();

printf("\n1) Save Book Info \n");
printf("\n2) Read Book Info \n");
printf("\n3) Read and Save Book Info according to Author Name other than Charles Dickens: \n");
printf("\n==========Enter Your Choice: =============\n");

switch(input){
    case 1:
    FILE *f= fopen("book_info.text", "w");

for(int i=0;i<number_book; i++)
   {
    printf("\nEnter Book Name: \n");
    gets(b[i].book_name);
    getchar();
    printf("\nEnter Author Name: \n");
    gets(b[i].author_name);
    getchar();
    printf("\nEnter Book ID: \n");
    scanf("%d", &b[i].id);
    getchar();
    printf("\nEnter Publication Year: \n");
    scanf("%d", &b[i].publication_year);
    getchar();
    printf("\nEnter Present Price: \n");
    scanf("%d", &b[i].present_price);
    getchar();
   }
   for(int i=0;i<number_book; i++)
    {
    fprintf(f,"\n Book Name: %s \n Author Name: %s \n Book ID: %d \n Publication Year:`%d \n Present Price: %d \n", b[i].book_name, b[i].author_name, b[i].id, b[i].publication_year, b[i].present_price);
    }
fclose(f);
break;

    case 2:
    f= fopen("book_info.text", "r");

for(int i=0;i<number_book; i++)
   {
     fscanf(f," %s %s %d %d %d ", &b.book_name, &b.author_name, &b.id, &b.publication_year, &b.present_price);
   }
    printf("The Books are: %s %s %d %d %d ",b.book_name, b.author_name, b.id, b.publication_year, b.present_price);
fclose(f);
           break;

    case 3:
 f= fopen("book_info.text", "r");

for(int i=0;i<number_book; i++)
   {
     fscanf(f," %s %s %d %d %d ", &b[i].book_name, &b[i].author_name, &b[i].id, &b[i].publication_year, &b[i].present_price);
   }
    printf("The Books are: %s %s %d %d %d ",b.book_name, b.author_name, b.id, b.publication_year, b.present_price);
fclose(f);

char name_Author[100];
printf("Enter Author Name: ");
gets(name_Author);

 if(strcmp(b.author_Name,name_Author)==0){
    FILE *fCharlesDickens= fopen("charlesdickens.text", "w");

for(int i=0;i<number_book; i++)
   {
    printf("\nEnter Book Name: \n");
    gets(b[i].book_name);
    getchar();
    printf("\nEnter Book ID: \n");
    scanf("%d", &b[i].id);
    getchar();
    printf("\nEnter Publication Year: \n");
    scanf("%d", &b[i].publication_year);
    getchar();
    printf("\nEnter Present Price: \n");
    scanf("%d", &b[i].present_price);
    getchar();
   }
   for(int i=0;i<number_book; i++)
    {
    fprintf(fCharlesDickens,"\n The Books by Charles Dickens are:\n Book Name: %s \n Book ID: %d \n Publication Year:`%d \n Present Price: %d \n", b[i].book_name, b[i].id, b[i].publication_year, b[i].present_price);
    }
fclose(fCharlesDickens);
  }else{
FILE *fNotCharlesDickens= fopen("not.text", "w");

for(int i=0;i<number_book; i++)
   {
    printf("\nEnter Book Name: \n");
    gets(b[i].book_name);
    getchar();
    printf("\nEnter Author Name: \n");
    gets(b[i].author_name);
    getchar();
    printf("\nEnter Book ID: \n");
    scanf("%d", &b[i].id);
    getchar();
    printf("\nEnter Publication Year: \n");
    scanf("%d", &b[i].publication_year);
    getchar();
    printf("\nEnter Present Price: \n");
    scanf("%d", &b[i].present_price);
    getchar();
   }
   for(int i=0;i<number_book; i++)
    {
    fprintf(fNotCharlesDickens,"\n The Books by Other Authors are:\n Book Name: %s \n Author Name: %s \n Book ID: %d \n Publication Year:`%d \n Present Price: %d \n", b[i].book_name, b[i].author_name, b[i].id, b[i].publication_year, b[i].present_price);
    }
    fclose(fNotCharlesDickens);
  }
    break;
   }
return 0;
}
