#include<stdio.h>
int main(){
int status=remove("student.txt");
if(status==0){
    printf("file removed successfully.");
}else{
    printf("File not found");
}
return 0;
}
