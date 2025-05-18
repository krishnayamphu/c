#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
char text1[]="Hello";
char text2[]="HELLO";
char text3[]="World";
char text4[]="Hello";

printf("Same Text: %d\n",strcmp(text1,text4));
printf("Not Same Text: %d\n",strcmp(text1,text3));
printf("Not Same Text: %d\n",strcmp(text1,text2));
printf("Same Text with Ignore case: %d\n",strcmpi(text1,text2));

getch();
return 0;
}
