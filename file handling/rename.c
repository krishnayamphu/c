#include<stdio.h>
int main(){
int status=rename("hello.txt","welcome.txt");
if(status==0){
    printf("file renamed successfully.");
}else{
    printf("File not found");
}
return 0;
}
