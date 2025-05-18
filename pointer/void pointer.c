#include<stdio.h>
int main(){

int i=9;
int *p;
float *fp;
void *ptr; // void pointer declaration
/*
p=fp;         // incorrect
fp=&i;        // incorrect
*/
ptr=p;         // correct
ptr=fp;         // correct
ptr=&i;         // correct

printf("address value of ptr: %u",ptr);
return 0;
}
