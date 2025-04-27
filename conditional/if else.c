#include<stdio.h>
#include<conio.h>
int main(){
float marks;
printf("Enter marks value: ");
scanf("%f",&marks);

if(marks>=35){
    printf("Pass");
}else{
    printf("Fail");
}

getch();
return 0;
}
