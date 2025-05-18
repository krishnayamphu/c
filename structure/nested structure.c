#include<stdio.h>
#include<string.h>
typedef struct{
    char addressLine[50];
    char city[20];
    char state[20];
}Address;

typedef struct{
    char name[20];
    float salary;
    Address address;
}Employee;

int main(){
    Employee e;
    strcpy(e.name,"Ram");
    strcpy(e.address.addressLine,"Kumaripati");
    strcpy(e.address.city,"Lalitpur");
    strcpy(e.address.state,"Bagmati");
    e.salary=2000;


    printf("Name: %s",e.name);
    printf("\nAddress: %s, %s, %s",e.address.addressLine,e.address.city,e.address.state);
    printf("\nSalary: %0.2f",e.salary);

return 0;
}
