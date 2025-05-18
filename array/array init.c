#include<stdio.h>
int main(){
    int i;
    int num[]={10,20,30,40};
    char vowels[]={'a', 'e','i','o','u'};

    for(i=0; i<4; i++){
        printf("%d, ",num[i]);
    }
    printf("\n");
    for(i=0; i<5; i++){
        printf("%c, ",vowels[i]);
    }
return 0;
}
