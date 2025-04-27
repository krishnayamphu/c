#include<stdio.h>
#include<conio.h>
int main(){
float point;
printf("Enter point value: ");
scanf("%f",&point);

if(point>=90){
    printf("Outstanding");
}else if(point>=75){
    printf("Very Good");
}else if(point>=60){
    printf("Good");
}else if(point>=45){
    printf("Satisfactory");
}else{
    printf("Poor");
}

getch();
return 0;
}
