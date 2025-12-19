#include<stdio.h>
#include<string.h>
struct book_info
{
    char name[20],author[20];
    int id,year;
    float price;
};
int main()
{
  struct book_info b;
  FILE *fp,*fd,*fo;
  fp=fopen("input.txt","r");
  fd=fopen("dickens.txt","w");
  fo=fopen("others.txt","w");
  if(fp==NULL||fd==NULL||fo==NULL)
  {
      printf("File cannot be opened.\n");
      return 1;
  }
  while(fscanf(fp,"Book's name:%s\nAuthor's name:%s\nId:%d\nPublish year:%d\nPrice:%f\n\n",b.name,b.author,&b.id,&b.year,&b.price)==5)
  {
      if(strcmp(b.author,"Charles_Dickens")==0)
        fprintf(fd,"Book's name:%s\n",b.name);
      else
        fprintf(fo,"Book's name:%s\n",b.name);
  }
  fclose(fp);
  fclose(fd);
  fclose(fo);
  return 0;
}
