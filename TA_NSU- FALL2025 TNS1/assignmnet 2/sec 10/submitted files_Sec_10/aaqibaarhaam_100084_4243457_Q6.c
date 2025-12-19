#include <stdio.h>
#include <string.h>

typedef struct
{
    char Name[30];
    int ID;
    int publish_year;
    char author[30];
    int present_price;
} bookinfo;

int main()
{
    bookinfo Book_info[100];//max 100 records as question said
    printf("Enter number of books existent in the records: ");
    int num;
    scanf("%d", &num);
    getchar(); // consume newline

    // ======== WRITE BOOK RECORDS ========
    FILE *fp = fopen("input.txt", "a");
    if(fp == NULL)
    {
        printf("Error opening file.\n");
        return 0;
    }

    for(int i = 0; i < num; i++)
    {
        printf("\n\nEnter name: ");
        gets(Book_info[i].Name);
        fputs(Book_info[i].Name, fp);
        fputc('\n', fp);

        printf("Enter ID: ");
        scanf("%d", &Book_info[i].ID);
        fprintf(fp, "%d ", Book_info[i].ID);

        printf("Enter publish year: ");
        scanf("%d", &Book_info[i].publish_year);
        getchar();
        fprintf(fp, "%d\n", Book_info[i].publish_year);

        printf("Enter author's name: ");
        gets(Book_info[i].author);
        fputs(Book_info[i].author, fp);
        fputc('\n', fp);

        printf("Enter present price: $");
        scanf("%d", &Book_info[i].present_price);
        getchar();
        fprintf(fp, "%d\n", Book_info[i].present_price);
    }
    /*
    book name/n
    ID publishyear\n
    author name\n
    presentprice\n
    */
    fclose(fp);





    // ======== READ AND DISPLAY RECORDS ========
    printf("\n\n\n~~~~~~~~ALL RECORDS~~~~~~~~\n\n");
    fp=fopen("input.txt","r");
    if(fp == NULL)
    {
        printf("Error opening file.\n");
        return 0;
    }
    int i=0;
    FILE *fd=fopen("charlesdickens.txt","w");//clears out the txt, and reads everything once, writing into charlesdickens.txt matching stuff
    fclose(fd);
    FILE *fanother=fopen("notcharlesdickens.txt","w");//clears out the txt, and reads everything once, writing into notcharlesdickens.txt matching stuff
    fclose(fanother);
    while
        (fgets(Book_info[i].Name, sizeof(Book_info[i].Name),fp)
        &&
        fscanf(fp,"%d %d",&Book_info[i].ID,&Book_info[i].publish_year)==2 && fgetc(fp)//NEEDED TO CLEAR BUFFER
        &&
        fgets(Book_info[i].author,sizeof(Book_info[i].author),fp)
        &&
        fscanf(fp,"%d",&Book_info[i].present_price)==1 && fgetc(fp))//NEEDED TO CLEAR BUFFER
    {
        printf("Name of book: "); puts(Book_info[i].Name);
        printf("Author: "); puts(Book_info[i].author);
        printf("ID: %d\n\n\n",Book_info[i].ID);
        if(strcmp(Book_info[i].author, "Charles Dickens\n") == 0)
        {
            fd=fopen("charlesdickens.txt","a");
            fputs(Book_info[i].Name, fd);//gets doesnt include \n, but we manually fputc('\n',fp), so when we read it with fgets, the \n gets included
            //fputc('\n', fd);--DONT DO, as this will add another breakline resulting in printing another blank Name: because it reads the second breakline
            fclose(fd);
        }
        else
        {
            fanother=fopen("notcharlesdickens.txt","a");
            fputs(Book_info[i].Name,fanother);
            fclose(fanother);
        }
        i++;//file pointer (fp) increments automatically after successful reading, not this i-need to increment manually
    }
    fclose(fp);

    fd = fopen("charlesdickens.txt", "r");
    if(fd == NULL)
    {
        printf("Error opening file.\n");
        return 0;
    }
    printf("\n\n\n~~~~~~~~Records of books by Charles Dickens~~~~~~~~\n\n");
    char name[100];
    while(fgets(name,sizeof(name),fd)!=NULL)
    {
        printf("Name: ");
        puts(name);
    }

    fanother = fopen("notcharlesdickens.txt", "r");
    if(fanother == NULL)
    {
        printf("Error opening file.\n");
        return 0;
    }
    printf("\n\n\n~~~~~~~~Records of books NOT by Charles Dickens~~~~~~~~\n\n");
    char name2[100];
    while(fgets(name2,sizeof(name2),fanother)!=NULL)
    {
        printf("Name: ");
        puts(name2);
    }
    return 0;
}
