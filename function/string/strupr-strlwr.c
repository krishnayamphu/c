#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
char text[]="Hello World";

printf("Uppercase Text: %s\n",strupr(text));
printf("Lowercase Text: %s\n",strlwr(text));
getch();
return 0;
}
