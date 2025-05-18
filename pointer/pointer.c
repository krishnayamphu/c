#include<stdio.h>
int main(){
    int a=5;
    int *ptr;

    ptr=&a;

    printf("Value of a: %d\n",a);
    printf("Address of a: %u\n",&a);

    printf("\nValue of ptr: %d\n",*ptr);
    printf("Reference Address value of ptr`: %u\n",ptr);

return 0;
}
