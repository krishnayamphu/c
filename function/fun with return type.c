#include<stdio.h>
int getMaxSpeed(); //1: function declaration
int main(){
    //3: function calling
    printf("Maximum speed limit is: %d", getMaxSpeed());  //50
return 0;
}

//2: function definition
int getMaxSpeed(){
    return 50;
}
