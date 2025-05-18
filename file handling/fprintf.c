#include<stdio.h>
int main(){
FILE *f;
char name[]="Ram";
int age=20;

f=fopen("student.txt","w+");
fprintf(f,"%s\t%d",name,age);
fclose(f);
printf("Data written successfully");
return 0;
}
