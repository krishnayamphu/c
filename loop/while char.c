#include<stdio.h>
int main(){
char ch;
printf("Type some characters:");
while((ch=getchar())!='\n'){
    printf("%c", ch);
}
return 0;
}
