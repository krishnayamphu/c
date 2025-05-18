#include<stdio.h>
int main(){
FILE *f;
f=fopen("hello.txt","w+");
printf("File created");
fclose(f);
return 0;
}
