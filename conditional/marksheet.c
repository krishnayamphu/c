#include<stdio.h>
int main(){
char name[20];
int rollno;
float nep,math,eng,science,social,account,omath;
float gpa,total=0;

printf("Enter your name:");
scanf("%s",&name);

printf("Enter rollno:");
scanf("%d",&rollno);

printf("Enter napali marks:");
scanf("%f",&nep);
printf("Enter math marks:");
scanf("%f",&math);
printf("Enter english marks:");
scanf("%f",&eng);
printf("Enter science marks:");
scanf("%f",&science);
printf("Enter social marks:");
scanf("%f",&social);
printf("Enter account marks:");
scanf("%f",&account);
printf("Enter omath marks:");
scanf("%f",&omath);

if(nep>=35&&eng>=35&& math>=35,science>=35&&social>=35&&account>=35&&omath>=35)
{
    total=nep+eng+math+science+social+account+omath;
    gpa=(4*total)/700;

    printf("Name: %s\n",name);
    printf("Rollno: %d\n",rollno);
    printf("Result: Pass\n");
    printf("Total: %0.2f\n",total);
    printf("GPA: %0.2f\n",gpa);
}else{
    printf("Fail");
}

return 0;
}
