#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct{
    char title[20];
    char author[20];
    int price;
}Book;
FILE *f,*fp;
void menu();
void getAllBooks();
void createBook();
void removeBook();
int main(){
    int choice;
    menu();
    scanf("%d",&choice);
    switch(choice){
    case 1:
        getAllBooks();
        break;
    case 2:
        createBook();
        break;
    case 4            :
       removeBook();
        break;
    default:
        printf("\nInvalid choice no.");
        break;
    }
return 0;
}
void menu(){
printf("::::::::::::::::::::::::::::: MENU :::::::::::::::::::::::::::::\n");
    printf("1. All Books\n");
    printf("2. Create Book\n");
    printf("3. Update Book\n");
    printf("4. Delete Book\n");
    printf("5. Search Book\n");
    printf("6. Exit\n");
printf("\nEnter choice [1-6]: ");
}

void getAllBooks(){
    Book book;
    f=fopen("book.txt","r+");
    if(f==NULL){
        printf("\nFile not found");
    }else{
        printf("::::::::::::::::::::::::::: All Book :::::::::::::::::::::::::::\n");
        printf("Title \t\t\t Author \t\t Price\n");
        while(fread(&book,sizeof(book),1,f)){
            printf("----------------------------------------------------------------\n");
            printf("%-25s %-25s %4d\n",book.title,book.author,book.price);
        }
    }

    fclose(f);
}

void createBook(){
    Book book;
    char next='y';
    f=fopen("book.txt","a+");
    while(next=='y'||next=='Y'){
        printf("\nBook title: ");
        scanf("%s",&book.title);
        printf("Author name: ");
        scanf("%s",&book.author);
        printf("Book Price: ");
        scanf("%d",&book.price);
        fwrite(&book,sizeof(book),1,f);
        printf("\nBook is created");
        printf("\nAdd another record? (Y/N): ");
        next=getche();
    }
    fclose(f);
}

void removeBook(){
    Book book;
    char title[20];
    f=fopen("book.txt","r+");
    fp=fopen("temp.txt","w+");

    printf("::::::::::::::::::::::::: Delete Book ::::::::::::::::::::::::::\n");
    printf("Enter book title: ");
    scanf("%s",&title);
    while(fread(&book,sizeof(book),1,f)){
        if(strcmpi(title,book.title)==0)
        {continue;}
        else{
            fwrite(&book,sizeof(book),1,fp);
        }
    }
    fclose(f);
    fclose(fp);
    remove("book.txt");
    rename("temp.txt","book.txt");
    printf("Book Deleated");
}
