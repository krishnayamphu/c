#include<stdio.h>
#include<string.h>
union Person{
    char name[20];
    int age;
};
int main(){
    union Person p;

    strcpy(p.name,"Ram");
    printf("\nPerson name: %s",p.name);

    p.age=20;
    printf("\nPerson age: %d",p.age);
return 0;
}

