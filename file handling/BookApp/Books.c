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
