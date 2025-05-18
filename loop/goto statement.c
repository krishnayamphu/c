#include<stdio.h>
int main(){
char name[20];
start:
printf("Enter name:");
scanf("%s",&name);

printf("Your name is: %s\n",name);
goto start;
return 0;
}
