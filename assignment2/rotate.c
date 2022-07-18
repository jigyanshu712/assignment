#include<stdio.h>
#include<conio.h>
int main(){
    int n,sum=0;
    printf("enter the three digit number\n");
    scanf("%d",&n);
    sum=n/10;
    n=n%10;
    n=n*100+sum;
    printf("%d",n);

getch();
return 0;}

