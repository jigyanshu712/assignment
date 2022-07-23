#include<stdio.h>
#include<conio.h>
float simpleinterest(float,float,float);
int main(){

float p ,r,t;
float si;
printf("enter the p,r and t\n");
scanf("%f%f%f",&p,&r,&t);
si=simpleinterest(p,r,t);
printf("simple interest is %f",si);
getch();
return 0;
}
float simpleinterest(float p,float r, float t){

float si;
si=(p*r*t)/100;
return(si);
}

