#include<stdio.h>
typedef struct{
    char name[20];
    int rollno;
}Student;

int main(){
 Student s={"Ram",20};
 printf("Name: %s",s.name);
 printf("\nRollno.: %d",s.rollno);
return 0;
}
