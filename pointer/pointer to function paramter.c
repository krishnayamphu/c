#include<stdio.h>
void message(char*);
int main(){

    message("hello world");
    message("Welcome to c programming");
return 0;
}

void message(char *msg){
    printf("Your message: %s\n",msg);
}
