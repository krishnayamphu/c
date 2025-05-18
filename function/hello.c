#include<stdio.h>
void hello(); //1: function declaration
int main(){
    //3: function calling
    hello();
return 0;
}

//2: function definition
void hello(){
    printf("Hello World\n");
}
