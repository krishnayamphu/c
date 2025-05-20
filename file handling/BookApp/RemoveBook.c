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
