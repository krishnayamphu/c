#include<stdio.h>
int main(){
    int num[5];
    int i;
    num[0]=10;
    num[1]=20;
    num[2]=30;
    num[3]=40;
    num[4]=50;

    printf("%d",num[4]);
    for(i=0; i<5; i++){
        printf("\n%d, ",num[i]);
    }
return 0;
}
