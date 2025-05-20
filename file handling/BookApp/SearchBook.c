
void searchBook(){
    Book book;
    char title[20];
    int count=0;
    f=fopen("book.txt","r+");
    fp=fopen("temp.txt","w+");

    printf("::::::::::::::::::::::::: Search Book ::::::::::::::::::::::::::\n");
    printf("Search book title: ");
    scanf("%s",&title);

    while(fread(&book,sizeof(book),1,f)){
        if(strcmpi(title,book.title)==0)
        {
            printf("\n::::::::::::::::::::: Found Book Details ::::::::::::::::::::\n");
            printf("Title \t\t\t Author \t\t Price\n");
            printf("----------------------------------------------------------------\n");
            printf("%-25s %-25s %4d\n",book.title,book.author,book.price);
            count++;
        }
    }

    if(count==0){
        printf("Book data not found!");
    }
    fclose(f);
    fclose(fp);
}

