#include<stdio.h>
int main(){

int i,j;
int num[2][2]={100,200,300,400};

for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        printf("%d ",num[i][j]);
    }
    printf("\n");
}
return 0;
}
