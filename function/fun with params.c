#include<stdio.h>
void sum(int x, int y); //1: function declaration
int main(){
    //3: function calling
    sum(10,5);
    sum(100,50);

return 0;
}

//2: function definition
void sum(int x, int y){
   printf("Total sum: %d\n",(x+y));
}
