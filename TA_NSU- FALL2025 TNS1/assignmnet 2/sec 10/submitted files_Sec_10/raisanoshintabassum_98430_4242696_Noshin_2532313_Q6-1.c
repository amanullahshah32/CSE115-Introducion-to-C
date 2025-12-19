#include<stdio.h>
struct book_info
{
    char name[20],author[20];
    int id,year;
    float price;
};
int main()
{
  struct book_info b[100];
  int n,i;
  printf("Enter number of books (max 100):");
   scanf("%d",&n);
    getchar();
  for(i=0;i<n;i++)
  {
      printf("Book :%d\n",i+1);
      printf("Enter book's name:");
      gets(b[i].name);
      printf("Enter Author's name:");
      gets(b[i].author);
      printf("Enter book's Id:");
      scanf("%d",&b[i].id);
      printf("Enter book's publish year:");
      scanf("%d",&b[i].year);
      printf("Enter book's price:");
      scanf("%f",&b[i].price);
      getchar();
  }

  FILE *fp=fopen("input.txt","a");
  if(fp==NULL)
  {
      printf("File cannot be opened.");
      return 1;
  }
  for(i=0;i<n;i++)
  {
      fprintf(fp,"Book's name:%s\nAuthor's name:%s\nId:%d\nPublish year:%d\nPrice:%f\n\n",b[i].name,b[i].author,b[i].id,b[i].year,b[i].price);
  }
  fclose(fp);
  printf("Data successfully recorded to input.txt");
  return 0;
}
