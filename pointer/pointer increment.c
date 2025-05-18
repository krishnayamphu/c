#include<stdio.h>
int main(){
    int a=5;
    int *ptr;

    ptr=&a;

    printf("Address value of ptr: %u\n",ptr);
    ptr++;
    printf("\nAddress Value of ptr after increment: %u\n",ptr);


return 0;
}
