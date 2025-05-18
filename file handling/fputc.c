#include<stdio.h>
int main(){
FILE *f;
f=fopen("hello.txt","w+");
fputc('h',f);
printf("Data written successfully.");
fclose(f);
return 0;
}
