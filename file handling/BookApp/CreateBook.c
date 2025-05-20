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
