#include<stdio.h>
#include<string.h>

struct Book_info{
    char name[100];
    int id;
    int year;
    char author[100];
    float price;
};

int main(){
    int n;
    printf("Enter number of books: ");
    scanf("%d",&n);
    getchar();

    struct Book_info b[100];

    for(int i=0;i<n;i++){
        printf("\nBook %d:\n",i+1);
        printf("Name: ");
        fgets(b[i].name,100,stdin);
        b[i].name[strcspn(b[i].name,"\n")]=0;
        printf("ID: ");
        scanf("%d",&b[i].id);
        printf("Year: ");
        scanf("%d",&b[i].year);
        getchar();
        printf("Author: ");
        fgets(b[i].author,100,stdin);
        b[i].author[strcspn(b[i].author,"\n")]=0;
        printf("Price: ");
        scanf("%f",&b[i].price);
        getchar();
    }

    FILE *fp=fopen("input.txt","w");
    for(int i=0;i<n;i++)
        fprintf(fp,"%s\n%d\n%d\n%s\n%.2f\n",
                b[i].name,b[i].id,b[i].year,b[i].author,b[i].price);
    fclose(fp);

    printf("\n--- All Books ---\n");
    fp=fopen("input.txt","r");
    char name[100],author[100];
    int id,year;
    float price;
    while(fgets(name,100,fp)){
        name[strcspn(name,"\n")]=0;
        fscanf(fp,"%d\n%d\n",&id,&year);
        fgets(author,100,fp);
        author[strcspn(author,"\n")]=0;
        fscanf(fp,"%f\n",&price);
        printf("%s %s %d\n",name,author,id);
    }
    fclose(fp);

    fp=fopen("input.txt","r");
    FILE *fd=fopen("dickens.txt","w");
    while(fgets(name,100,fp)){
        name[strcspn(name,"\n")]=0;
        fscanf(fp,"%d\n%d\n",&id,&year);
        fgets(author,100,fp);
        author[strcspn(author,"\n")]=0;
        fscanf(fp,"%f\n",&price);
        if(strcmp(author,"Charles Dickens")==0)
            fprintf(fd,"%s\n",name);
    }
    fclose(fp);
    fclose(fd);

    fp=fopen("input.txt","r");
    fd=fopen("others.txt","w");
    while(fgets(name,100,fp)){
        name[strcspn(name,"\n")]=0;
        fscanf(fp,"%d\n%d\n",&id,&year);
        fgets(author,100,fp);
        author[strcspn(author,"\n")]=0;
        fscanf(fp,"%f\n",&price);
        if(strcmp(author,"Charles Dickens")!=0)
            fprintf(fd,"%s\n",name);
    }
    fclose(fp);
    fclose(fd);

    printf("\nFiles created: input.txt, dickens.txt, others.txt\n");
    return 0;
}