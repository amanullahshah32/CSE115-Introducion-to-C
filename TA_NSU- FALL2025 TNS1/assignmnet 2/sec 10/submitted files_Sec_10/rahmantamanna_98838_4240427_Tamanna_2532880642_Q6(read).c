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
    int i=0;
    struct Book_info book[100];
    FILE *fp;
    fp=fopen("input.txt","r");
     if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    while(fscanf(fp,"%s %s %d %d %f",book[i].name,book[i].author,&book[i].ID,&book[i].publish_year,&book[i].present_price)==5)
    {
        printf("%s\t%s\t%d\n",book[i].name,book[i].author,book[i].ID);
        i++;
    }
    fclose(fp);
}
