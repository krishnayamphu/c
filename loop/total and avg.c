#include<stdio.h>
int main(){
int i,n=5;
float total=0, avg=0;

for(i=1; i<=n; i++){
    printf("%d\n",i);
    total=total+i;
}
avg=total/n;
printf("Total sum: %0.2f\n",total);
printf("Average: %0.2f",avg);
return 0;
}
