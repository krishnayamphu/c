void updateBook(){
    Book book;
    char title[20];
    int count=0;
    f=fopen("book.txt","r+");
    fp=fopen("temp.txt","w+");

    printf("::::::::::::::::::::::::: Update Book ::::::::::::::::::::::::::\n");
    printf("Enter book title: ");
    scanf("%s",&title);

    while(fread(&book,sizeof(book),1,f)){
        if(strcmpi(title,book.title)==0)
        {
            printf("\n::::::::::::::::::::: Existing Book Details ::::::::::::::::::::\n");
            printf("Title \t\t\t Author \t\t Price\n");
            printf("----------------------------------------------------------------\n");
            printf("%-25s %-25s %4d\n",book.title,book.author,book.price);
            count++;
        }
    }
       rewind(f);
    if(count==0){
        printf("Book data not found!");
    }

    while(fread(&book,sizeof(book),1,f)){
        if(strcmpi(title,book.title)==0)
        {
            printf("\n Enter New Details:\n");
            printf("\nBook title: ");
            scanf("%s",&book.title);
            printf("Author name: ");
            scanf("%s",&book.author);
            printf("Book Price: ");
            scanf("%d",&book.price);
            fwrite(&book,sizeof(book),1,fp);
        }else{
            fwrite(&book,sizeof(book),1,fp);
        }
    }

    fclose(f);
    fclose(fp);
    remove("book.txt");
    rename("temp.txt","book.txt");
    if(count==1){
        printf("Book Updated");
    }else{
        printf("Book can't Update");
    }

}
