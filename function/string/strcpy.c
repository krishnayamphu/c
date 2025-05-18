#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
char text1[]="Hello";
char text2[20];

strcpy(text2,text1);

printf("Output: %s\n",text2);

getch();
return 0;
}
