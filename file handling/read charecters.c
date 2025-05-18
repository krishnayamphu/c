#include<stdio.h>
int main(){
FILE *f;
char ch;
f=fopen("data.txt","r+");

printf("Output:\n");
while((ch=fgetc(f))!=EOF){
    printf("%c",ch);
}
return 0;
}
