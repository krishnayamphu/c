#include<stdio.h>
int main(){
int a=5,b=10;
int *const ptr=&a;

//error read only variable
//ptr=&b;

printf("%d\n",*ptr);

return 0;
}
