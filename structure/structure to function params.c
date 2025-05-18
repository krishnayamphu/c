#include<stdio.h>
#include<string.h>
struct Student{
char name[20];
int age;
};
void studentInfo(struct Student);
int main(){
    struct Student s={"Hari",21};
    studentInfo(s);

return 0;
}

void studentInfo(struct Student s){
    printf("Student's name: %s",s.name);
    printf("\nStudent's age: %d",s.age);
}
