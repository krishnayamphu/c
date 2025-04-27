#include<stdio.h>
int main(){
    float l,b,a=0,p=0;

    printf("Enter length and breatdh value:");
    scanf("%f%f",&l,&b);
    a=l*b;
    p=2*(l+b);

    printf("Length and breadth of a rectangle is: %0.2f and %0.2f",l,b);
    printf("\nArea: %0.2f",a);
    printf("\nPerimeter: %0.2f",p);
    return 0;
}
