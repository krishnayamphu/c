#include<stdio.h>
void stdInfo(char name[20],int age); //1: function declaration

int main(){
    //3: function calling
    stdInfo("Ram",18);

return 0;
}

//2: function definition
void stdInfo(char name[20],int age){
   printf("Name: %s\n",name);
   printf("Age: %d\n",age);
}
