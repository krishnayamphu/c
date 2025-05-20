#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

FILE *f,*fp;
#include "Book.c"
#include "Menu.c"
#include "Books.c"
#include "CreateBook.c"
#include "EditBook.c"
#include "RemoveBook.c"
#include "SearchBook.c"

int main(){
    int choice;
    while(1){
        system("cls");
        menu();
        scanf("%d",&choice);
        switch(choice){
        case 1:
            getAllBooks();
            getch();
            break;
        case 2:
            createBook();
            getch();
            break;
        case 3:
            updateBook();
            getch();
            break;
        case 4:
           removeBook();
           getch();
            break;
        case 5:
            searchBook();
            getch();
            break;
        case 6:
            printf("Press ANY KEY to continue...");
            exit(0);
            break;
        default:
            printf("\nInvalid choice no.");
            break;
        }
    }
return 0;
}







