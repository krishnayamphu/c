#include<stdio.h>
int main(){
FILE *f;
char ch;
f=fopen("data.txt","w+");

printf("Type some characters:");
while((ch=getchar())!='\n'){
        fputc(ch,f);
}
printf("Data written successfully.");
return 0;
}
