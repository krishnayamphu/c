#include<stdio.h>
#include<string.h>
struct Student{
char name[20];
int age;
};
int main(){
    struct Student s={"Hari",21};

    printf("Student's name: %s",s.name);
    printf("\nStudent's age: %d",s.age);

return 0;
}
