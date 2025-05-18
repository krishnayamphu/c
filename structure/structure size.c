#include<stdio.h>
struct Student{
    char name[20];
    int age;
};
int main(){
    struct Student s;
    printf("Size: %d",sizeof(s));
return 0;
}

