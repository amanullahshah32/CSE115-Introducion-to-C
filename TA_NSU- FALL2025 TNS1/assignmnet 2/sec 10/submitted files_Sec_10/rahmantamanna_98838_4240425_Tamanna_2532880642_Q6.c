#include<stdio.h>
struct Book_info{
     char name[50];
     int ID;
     int publish_year;
     char author[20];
     float present_price;
};
int main()
{
    struct Book_info book[100];
    int n;
    printf("Enter number of books: ");
    scanf("%d",&n);
    getchar();
    printf("Enter book info\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter book name: ");
        gets(book[i].name);
        printf("Author name: ");
        gets(book[i].author);
        printf("Enter ID: ");
        scanf("%d",&book[i].ID);
        printf("Publish Year: ");
        scanf("%d",&book[i].publish_year);
        printf("Present price:");
        scanf("%f",&book[i].present_price);
        getchar();
    }

    FILE *fp;
    fp=fopen("input.txt","a");
    if(fp==NULL)
  {
      printf("File cannot be opened.");
      return 1;
  }
    for(int i=0;i<n;i++)
    {
       fprintf(fp,"%s%s%d%d%f\n",book[i].name,book[i].author,book[i].ID,book[i].publish_year,book[i].present_price);
    }
    fclose(fp);
    printf("Data successfully recorded to int.txt");
  return 0;
}
