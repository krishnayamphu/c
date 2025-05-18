#include<stdio.h>
int main(){
int a=5;
int *p,**ptr;

p=&a;
ptr=&p;

printf("value of a: %d\n",a);
printf("value of p: %d\n",*p);
printf("value of ptr: %d\n",**ptr);

return 0;
}
