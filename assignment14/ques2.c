#include<stdio.h>
int main(){
float  a[10],sum=0,avg;
int i;
printf("enter the number\n");
for(i=0;i<10;i++){
    scanf("%f",&a[i]);
    sum=sum+a[i];
}
avg=(sum)/10;
printf("the average of 10 numbers is %f",avg);

return 0;}

