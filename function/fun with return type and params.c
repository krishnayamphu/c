#include<stdio.h>
int sum(int x, int y); //1: function declaration
int main(){
    //3: function calling
    printf("Total: %d",sum(10,5));

return 0;
}

//2: function definition
int sum(int x, int y){
   return x+y;
}
