#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
char text1[]="Hello";
char text2[]="World";

printf("String concatenation: %s\n",strcat(text1,text2));
printf("Reverse String: %s",strrev(text1));

getch();
return 0;
}
